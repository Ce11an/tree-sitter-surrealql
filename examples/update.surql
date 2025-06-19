-- Create a Schemaless person table with a random id
CREATE person CONTENT {
    name: 'John',
    company: 'Surrealist',
    skills: ['JavaScript', 'Go' , 'SurrealQL']
};

-- Create another person with a specific id
CREATE person:tobie CONTENT {
    name: 'Tobie',
    company: 'SurrealDB',
    skills: ['JavaScript', 'Go' , 'SurrealQL']
};

-- Update all records in a table
-- The `enjoys` field will also be an array.
-- The += operator alone is enough to infer the type
UPDATE person SET
	dollars = 50,
	skills += 'breathing',
	enjoys += 'reading',
	full_name = name + ' Mc' + name + 'erson';

-- Update a record with a specific string id to add a new skill: 'Rust'
UPDATE person:tobie SET skills += 'Rust';

-- The -= operator can be used to remove an item from an array or reduce a numeric value by a certain value.

UPDATE person:tobie SET
	skills -= 'Go',
	dollars -= 1;

-- Remove the company field by setting it to NONE or using the UNSET keyword
UPDATE person:tobie SET company = NONE;

UPDATE person:tobie UNSET company;

-- Update all records which match the condition that `company` is not equal to "SurrealDB"
UPDATE person SET skills += "System design" WHERE company != "SurrealDB";

-- Update all records with the same content
UPDATE person CONTENT {
	name: 'John',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript']
};

-- Oops, now they are both named John.
-- Update a specific record with some content
UPDATE person:tobie CONTENT {
	name: 'Tobie',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript']
};

-- Update certain fields on all records
UPDATE person MERGE {
	settings: {
		marketing: true
	}
};

-- Update certain fields on a specific record
UPDATE person:tobie MERGE {
	settings: {
		marketing: true
	}
};

-- Patch the JSON response
UPDATE person:tobie PATCH [
	{
		"op": "add",
		"path": "Engineering",
		"value": "true"
	}
];

-- Don't return any result
UPDATE person SET skills += 'reading' RETURN NONE;

-- Return the changeset diff
UPDATE person SET skills += 'reading' RETURN DIFF;

-- Return the record before changes were applied
UPDATE person SET skills += 'reading' RETURN BEFORE;

-- Return the record after changes were applied (the default)
UPDATE person SET skills += 'reading' RETURN AFTER;

-- Return the value of the 'skills' field without the field name
UPDATE person SET skills += 'reading' RETURN VALUE skills;

-- Using a timeout
UPDATE person
	SET important = true
	WHERE ->knows->person->(knows WHERE influencer = true)
	TIMEOUT 5s;
