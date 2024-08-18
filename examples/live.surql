-- By default, SurrealDB will push the entire record over the websocket when created or updated, and just the record's ID when deleted.
LIVE SELECT * FROM person;

-- You can optionally apply filters with the WHERE clause.
LIVE SELECT * FROM person WHERE age > 18;
