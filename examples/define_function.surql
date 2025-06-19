-- It is necessary to prefix the name of your function with "fn::"
-- This indicates that it's a custom function
DEFINE FUNCTION fn::greet($name: string) {
	RETURN "Hello, " + $name + "!";
};

-- Returns: "Hello, Tobie!"
RETURN fn::greet("Tobie");

-- Define a function that checks if a relation exists between two nodes
DEFINE FUNCTION fn::relation_exists(
	$in: record,
	$tb: string,
	$out: record
) {
	-- Check if a relation exists between the two nodes.
	LET $results = SELECT VALUE id FROM type::table($tb) WHERE in = $in AND out = $out;
	-- Return true if a relation exists, false otherwise
    RETURN array::len($results) > 0;
};

-- Optional arguments
DEFINE FUNCTION fn::last_option($required: number, $optional: option<number>) {
	RETURN {
		required_present: type::is::number($required),
		optional_present: type::is::number($optional)
	}
};

RETURN fn::last_option(1, 2);
{
	required_present: true,
	optional_present: true
};

RETURN fn::last_option(1);
{
	required_present: true,
	optional_present: false
};

-- Recursive functions
DEFINE FUNCTION fn::relate_all($records: array<record>) {
  IF $records.len() < 2 {
      -- Don't do anything, ending the recursion
  }  ELSE {
      LET $first = $records[0];
      LET $remainder = array::slice($records, 1);
      FOR $counterpart IN $remainder {
          RELATE $first->to->$counterpart;
      };
      fn::relate_all($remainder);
  }
};

CREATE person:1, person:2, person:3, person:4, person:5, person:6, person:7;

fn::relate_all((SELECT VALUE id FROM person));

SELECT id, ->to->? FROM person;

-- Using the FULL permission
-- Define a function to fetch all products. All users can access this function
DEFINE FUNCTION fn::fetchAllProducts() {
	RETURN (SELECT * FROM product LIMIT 10);
} PERMISSIONS FULL;

-- Returns: The first 10 products in the product table
RETURN fn::fetchAllProducts();

-- Define using the NONE permission
-- Define a function that fetches all expiration years from the payment_details table and denies access to all none-admin users
DEFINE FUNCTION fn::fetchAllPaymentDetails() {
	RETURN (SELECT stored_cards.expiry_year FROM payment_details LIMIT 5);
} PERMISSIONS NONE;

RETURN fn::fetchAllPaymentDetails();

-- Using the WHERE clause
-- Define a function that fetches all products with the condition that only admin users can access it
DEFINE FUNCTION fn::fetchAllProducts() {
	RETURN (SELECT * FROM product LIMIT 10);
} PERMISSIONS WHERE $auth.admin = true;

-- Create a FUNCTION if it does not already exist
DEFINE FUNCTION IF NOT EXISTS fn::example() {};

-- Create an FUNCTION and overwrite if it already exists
DEFINE FUNCTION OVERWRITE fn::example() {};
