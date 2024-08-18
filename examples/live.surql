-- By default, SurrealDB will push the entire record over the websocket when created or updated, and just the record's ID when deleted.
LIVE SELECT * FROM person;

-- When using the DIFF mode, updates will be sent in the form of an array with JSON Patch messages.
LIVE SELECT DIFF FROM person;

-- You can optionally apply filters with the WHERE clause.
LIVE SELECT * FROM person WHERE age > 18;
