-- Select all fields from a table
SELECT * FROM person;

-- Select specific fields from a table
SELECT name, address, email FROM person;

-- Select all fields from a specific record
SELECT * FROM person:tobie;

-- Select specific fields from a specific record
SELECT name, address, email FROM person:tobie;

-- Alias/rename fields
SELECT name AS user_name, address FROM person;

-- Select just a single record
-- Using the ONLY keyword, just an object for the record in question will be returned.
-- This, instead of an array with a single object.
SELECT * FROM ONLY person:john;

-- Select the values of a single field from a table
SELECT VALUE name FROM person;

-- Select the values of a single field from a specific record
SELECT VALUE name FROM person:00e1nc508h9f7v63x72O;

-- Select nested objects/values
SELECT address.city FROM person;

-- Select all nested array values
-- note the .* syntax works to select everything from an array or object-like values
SELECT address.*.coordinates AS coordinates FROM person;
-- Equivalent to
SELECT address.coordinates AS coordinates FROM person;

-- Select one item from an array
SELECT address.coordinates[0] AS latitude FROM person;

-- Select unique values from an array
SELECT array::distinct(tags) FROM article;

-- Select unique values from a nested array across an entire table
SELECT array::group(tags) AS tags FROM article GROUP ALL;

-- Use mathematical calculations in a select expression
SELECT (( celsius * 1.8 ) + 32) AS fahrenheit FROM temperature;

-- Select filtered nested array values
SELECT address[WHERE active = true] FROM person;

-- Select a person who has reacted to a post using a celebration
-- You can see the graph as: person->(reacted_to WHERE type='celebrate')->post
SELECT * FROM person WHERE ->(reacted_to WHERE type='celebrate')->post;

-- Select a remote field from connected out graph edges
SELECT ->likes->friend.name AS friends FROM person:tobie;

-- Use the result of a subquery as a returned field
SELECT *, (SELECT * FROM events WHERE type = 'activity' LIMIT 5) AS history FROM user;

-- Use the parent instance's field in a subquery (predefined variable)
SELECT *, (SELECT * FROM events WHERE host == $parent.id) AS hosted_events FROM user;

-- Select all person records with IDs between the given range
SELECT * FROM person:1..1000;
-- Select all records for a particular location, inclusive
SELECT * FROM temperature:['London', NONE]..=['London', time::now()];
-- Select all temperature records with IDs less than a maximum value
SELECT * FROM temperature:..['London', '2022-08-29T08:09:31'];
-- Select all temperature records with IDs greater than a minimum value
SELECT * FROM temperature:['London', '2022-08-29T08:03:39']..;
-- Select all temperature records with IDs between the specified range
SELECT * FROM temperature:['London', '2022-08-29T08:03:39']..['London', '2022-08-29T08:09:31'];

-- This command selects all records for specific users 'tobie' and 'jaime', as well as all records for the company 'surrealdb'.
SELECT * FROM user:tobie, user:jaime, company:surrealdb;

-- This command selects records from a list of identifiers. The identifiers can be numerical,
-- string, or specific records such as 'person:lrym5gur8hzws72ux5fa'.
SELECT * FROM [3648937, "test", person:lrym5gur8hzws72ux5fa, person:4luro9170uwcv1xrfvby];

-- This command selects data from an object that includes a 'person' key,
-- which is associated with a specific person record, and an 'embedded' key set to true.
SELECT * FROM { person: person:lrym5gur8hzws72ux5fa, embedded: true };

-- This command first performs a subquery, which selects all 'user' records and adds a
-- computed 'adult' field that is true if the user's 'age' is 18 or older.
-- The main query then selects all records from this subquery where 'adult' is true.
SELECT * FROM (SELECT age >= 18 AS adult FROM user) WHERE adult = true;

-- Simple conditional filtering
SELECT * FROM article WHERE published = true;

-- Conditional filtering based on graph edge properties
SELECT * FROM person WHERE ->(reaction WHERE type='celebrate')->post;

-- Conditional filtering with boolean logic
SELECT * FROM user WHERE (admin AND active) OR owner = true;

-- Select filtered nested array values
SELECT address[WHERE active = true] FROM person;

-- Split the results by each value in an array
SELECT * FROM user SPLIT emails;

-- Filter the result of a subquery
SELECT * FROM (SELECT * FROM person SPLIT loggedin) WHERE loggedin > '2023-05-01';

-- Group records by a single field
SELECT country FROM user GROUP BY country;

-- Group results by multiple fields
SELECT gender, country, city FROM person GROUP BY gender, country, city;

-- Group results with aggregate functions
SELECT count() AS total, math::mean(age) AS average_age, gender, country FROM person GROUP BY gender, country;

-- Get the total number of records in a table
SELECT count() AS number_of_records FROM person GROUP ALL;

-- Select unique values from a nested array across an entire table
SELECT array::group(tags) AS tags FROM article GROUP ALL;

-- Order records randomly
SELECT * FROM user ORDER BY RAND();

-- Order records descending by a single field
SELECT * FROM song ORDER BY rating DESC;

-- Order records by multiple fields independently
SELECT * FROM song ORDER BY artist ASC, rating DESC;

-- Order text fields with unicode collation
SELECT * FROM article ORDER BY title COLLATE ASC;

-- Order text fields with which include numeric values
SELECT * FROM article ORDER BY title NUMERIC ASC;

-- Select only the top 50 records from the person table
SELECT * FROM person LIMIT 50;

-- Select all the review information
-- and the artist's email from the artist table
SELECT *, artist.email FROM review FETCH artist;

-- Select all the article information
-- only if the author's age (from the author table) is under 30.
SELECT * FROM article WHERE author.age < 30 FETCH author;

-- Cancel this conditional filtering based on graph edge properties
-- if it's not finished within 5 seconds
SELECT * FROM person WHERE ->knows->person->(knows WHERE influencer = true) TIMEOUT 5s;

-- Fetch and process the person, purchased and product targets in parallel
-- Select every product that was purchased by a person that purchased a product that person tobie also purchased
SELECT ->purchased->product<-purchased<-person->purchased->product FROM person:tobie PARALLEL;

-- Returns the execution plan
SELECT * FROM person WHERE email='tobie@surrealdb.com' EXPLAIN;

-- Returns the execution plan with the number of fetched rows
SELECT * FROM person WHERE email='tobie@surrealdb.com' EXPLAIN FULL;

-- forces the query planner to use the specified index(es):
SELECT * FROM person WITH INDEX ft_email WHERE email = 'tobie@surrealdb.com' AND company = 'SurrealDB';

-- forces the usage of the table iterator
SELECT name FROM person WITH NOINDEX WHERE job = 'engineer' AND gender = 'm';

SELECT * FROM ONLY person:john;

-- Fails
SELECT * FROM ONLY table_name;
-- Succeeds
SELECT * FROM ONLY table_name LIMIT 1;
