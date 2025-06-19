-- UPSERT without a WHERE clause
-- As an UPSERT statement is primarily an INSERT statement, one without a WHERE clause will not perform an update.
UPSERT person SET name = 'Billy';

-- Using where clause
UPSERT person SET name = 'Jaime' WHERE name = 'Jaime';

-- With a specified ID
UPSERT person:test SET name = 'Jaime' WHERE name = 'Jaime';

-- Update with metadata
UPDATE user SET
	metadata = { likes: ["strawberries", "fields"] }
WHERE
	name = "Billy" AND
	class = "wizard";

-- UPSERT just a single record
-- Using the ONLY keyword, just an object for the record in question will be returned.
-- This, instead of an array with a single object.
UPSERT ONLY person:tobie SET 
	name = 'Tobie', 
	company = 'SurrealDB', 
	skills = ['Rust', 'Go', 'JavaScript'];

-- UPSERT a document and remove a tag from an array
UPSERT person:tobie SET interests += 'Java';

-- UPSERT a document and increment a numeric value
UPSERT webpage:home SET click_count += 1;

-- Creating a record by default makes the UPSERT statement an ideal way to manage an incrementing field.
UPSERT event_for:[time::now().format("%Y-%m-%d")] SET
    number += 1;

-- UPSERT all records with the same content
UPSERT person CONTENT {
	name: 'Tobie',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript']
};

-- UPSERT a specific record with some content
UPSERT person:tobie CONTENT {
	name: 'Tobie',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript']
};

-- Using REPLACE clause
-- Attempts to change `created` field, error
UPSERT person:gladys REPLACE { age: 70 };
-- `created` equals current value, query works
UPSERT person:gladys REPLACE { age: 70, created: d'2024-01-01T00:00:00Z' };

-- Using MERGE clause
-- Inserts a new record with a single field and random ID
UPSERT person MERGE {
	settings: {
		marketing: true
	}
};

-- Updates certain fields on a specific record
UPSERT person:tobie MERGE {
	settings: {
		marketing: true
	}
};

-- Using PATCH clause
-- Patch the JSON response
UPSERT person:tobie PATCH [
	{
		"op": "add",
		"path": "Engineering",
		"value": "true"
	}
];

-- Alter the RETURN value
-- Don't return any result
UPSERT person:tobie SET interests += 'reading' RETURN NONE;

-- Return the changeset diff
UPSERT person:tobie SET interests += 'reading' RETURN DIFF;

-- Return the record before changes were applied
UPSERT person:tobie SET interests += 'reading' RETURN BEFORE;

-- Return the record after changes were applied (the default)
UPSERT person:tobie SET interests += 'reading' RETURN AFTER;

-- Return a specific field only from the upserted records
UPSERT person:tobie SET interests = ['skiing', 'music'] RETURN name, interests;

-- Using TIMEOUT
UPSERT person:3 SET important = true WHERE ->knows->person->(knows WHERE influencer = true) TIMEOUT 5s;
