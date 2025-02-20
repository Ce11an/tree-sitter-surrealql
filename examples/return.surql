-- Return a simple value
RETURN 123;
RETURN "I am a string!";
RETURN {
	prop: "value"
};

-- Return the result of a query
RETURN SELECT * FROM person;
RETURN (CREATE person).id;

// RETURN statements can set the result of any transaction. This includes transactions, blocks and functions.
BEGIN TRANSACTION;

-- We are executing quite a few queries here
LET $firstname = "John";
LET $lastname = "Doe";

LET $person = CREATE person CONTENT {
	firstname: $firstname,
	lastname: $lastname
};

-- But because we end with a RETURN query, only the person's ID will be returned
-- The results of the other queries will be omitted.
RETURN $person.id;

-- One issue with this approach is that query errors are generic.
-- To get around that, use a block, which is executed as a transaction by itself.

COMMIT TRANSACTION;

-- Early return
DEFINE FUNCTION fn::person::create($firstname: string, $lastname: string) {
	LET $person = CREATE person CONTENT {
		firstname: $firstname,
		lastname: $lastname
	};

	-- The RETURN statement will set the return value of the custom function, and further queries will not be executed.
	RETURN $person.id;

    -- This query will never be executed
    CREATE person SET firstname = "Stephen", lastname = "Strange";
};

fn::person::create("Thanos", "Johnson");
SELECT * FROM person;
