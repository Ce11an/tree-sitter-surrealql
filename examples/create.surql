-- Create a new record
CREATE person;

-- To specify a specific ID for a table instead, use : followed by a value.
CREATE person:one;

-- Use the type::thing() function to provide a record's table and id separately
CREATE type::thing("person", "one");

-- Create a new record with a text id
CREATE person:tobie SET
    name = 'Tobie',
    company = 'SurrealDB',
    skills = ['Rust', 'Go', 'JavaScript'];

-- Multiple records or even multiple record types can be created by separating table names by commas.
CREATE townsperson, cat, dog SET
    created_at = time::now(),
    name = "Just a " + meta::tb(id);

-- Returns just a single record
CREATE ONLY person:tobie SET
    name = 'Tobie',
    company = 'SurrealDB',
    skills = ['Rust', 'Go', 'JavaScript'];

-- Return Diff
CREATE person SET age = 46, username = "john-smith" RETURN DIFF;

-- Specify a timeout
CREATE person:john SET age = 46, username = "john-smith" TIMEOUT 500ms;

-- Create with LET and CONTENT
LET $person = CREATE person CONTENT {
	firstname: $firstname,
	lastname: $lastname
};

-- Query attempting to create half a million `person` records
CREATE |person:500000| SET age = 46, username = "john-smith" TIMEOUT 500ms;
