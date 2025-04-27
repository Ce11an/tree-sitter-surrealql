-- Basic relate
CREATE person:aristotle, article:on_sleep_and_sleeplessness;
RELATE person:aristotle->wrote->article:on_sleep_and_sleeplessness;

-- Aristotle's id and the articles he wrote
SELECT id, ->wrote->article FROM person:aristotle;
-- Every `person`'s id and written articles
-- Same output as above as the database has a single `person` record
SELECT id, ->wrote->article FROM person;
-- Directly follow the path from Aristotle to his written articles
RETURN person:aristotle->wrote->article;

-- Relate using multiple records
RELATE [cat:mr_meow, cat:mrs_meow]->parent_of->cat:kitten;

-- Relate a record with content
LET $time = time::now();
RELATE person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm
    CONTENT {
        time: {
            written: $time
        }
    };

-- Relate a single record
RELATE ONLY person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm;

-- Using let statements in a relate statement

-- These two statements store the result of the subquery in a parameter
-- The subquery returns an array of IDs
LET $person =  (SELECT VALUE id FROM person);
LET $article = (SELECT VALUE id FROM article);

-- This statement creates a relationship record for every combination of Record IDs
-- Such that if we have 10 records each in the person and article table
-- We get 100 records in the wrote edge table (10*10 = 100)
-- In this case it would mean that each article would have 10 authors
RELATE $person->wrote->$article SET time = time::now();

--Modify output with return
-- Don't return any result
RELATE person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm
    SET time_written = time::now()
    RETURN NONE;

-- Return the changeset diff
RELATE person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm
    SET time_written = time::now()
    RETURN DIFF;

-- Return the record before changes were applied
RELATE person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm
    SET time_written = time::now()
    RETURN BEFORE;

-- Return the record after changes were applied (the default)
RELATE person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm
    SET time_written = time::now()
    RETURN AFTER;

-- Return a specific field only from the updated records
RELATE person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm
    SET time_written = time::now()
    RETURN time_written;

-- Return only the value of a specific field without the field name
RELATE person:l19zjikkw1p1h9o6ixrg->wrote->article:8nkk6uj4yprt49z7y3zm
    SET time_written = time::now()
    RETURN VALUE time_written;

--Using the timeout clause
-- Cancel this conditional filtering based on graph edge properties
-- if not finished within 5 seconds
SELECT * FROM person WHERE ->knows->person->(knows WHERE influencer = true) TIMEOUT 5s;

-- Using the parallel clause
-- Fetch and process the person, purchased and product targets in parallel
-- Select every product that was purchased by a person that purchased a product that person tobie also purchased
SELECT ->purchased->product<-purchased<-person->purchased->product FROM person:tobie PARALLEL;

-- Deleting graph edges
DELETE person:tobie->bought WHERE out=product:iphone RETURN BEFORE;

-- Using parentheses to refine graph query logic
SELECT
    ->purchased->(?)
    <-purchased<-person
    ->purchased->(?)
FROM person:tobie;
