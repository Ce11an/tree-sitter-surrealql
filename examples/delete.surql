-- Delete all records from a table
DELETE person;

-- Delete a record with a specific numeric id
DELETE person:100;

-- Delete a record with a specific string id
DELETE person:tobie;

-- Return record before delete
DELETE ONLY person:tobie RETURN BEFORE;

-- Update all records which match the condition
DELETE city WHERE name = 'London';

-- Don't return any result (the default)
DELETE user WHERE age < 18 RETURN NONE;

-- Return the changeset diff
DELETE user WHERE interests CONTAINS 'reading' RETURN DIFF;

-- Return the record before changes were applied
DELETE user WHERE interests CONTAINS 'reading' RETURN BEFORE;

-- Return the record after changes were applied
DELETE user WHERE interests CONTAINS 'reading' RETURN AFTER;

-- Delete field name
DELETE info WHERE error_info.continue;

-- Delete with a timeout
DELETE person WHERE ->knows->person->(knows WHERE influencer = false) TIMEOUT 5s;

-- Delete graph edges
DELETE person:tobie->bought WHERE out=product:iphone;
