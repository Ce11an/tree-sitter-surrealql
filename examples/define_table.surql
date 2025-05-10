-- Declare the name of a table.
DEFINE TABLE reading;

-- By marking a table as DROP, you disallow any records to be created or updated.
-- Records that currently exist in the table will not automatically be deleted, you can still remove them manually.
DEFINE TABLE reading DROP;

-- Create schemafull user table.
DEFINE TABLE user SCHEMAFULL;

-- Create schemaless user table.
DEFINE TABLE user SCHEMALESS;

-- Define a table as a view which aggregates data from the review table
DEFINE TABLE avg_product_review TYPE NORMAL AS
SELECT
	count() AS number_of_reviews,
	math::mean(<float> rating) AS avg_review,
	->product.id AS product_id,
	->product.name AS product_name
FROM review
GROUP BY product_id, product_name;

-- Query the projection
SELECT * FROM avg_product_review;

-- Specify access permissions for the 'post' table
DEFINE TABLE post SCHEMALESS
    PERMISSIONS
	FOR select
	    -- Published posts can be selected
	    WHERE published = true
	    -- A user can select all their own posts
	    OR user = $auth.id
	FOR create, update
	    -- A user can create or update their own posts
	    WHERE user = $auth.id
	FOR delete
	    -- A user can delete their own posts
	    WHERE user = $auth.id
	    -- Or an admin can delete any posts
	    OR $auth.admin = true;

-- Create a TABLE if it does not already exist
DEFINE TABLE IF NOT EXISTS reading

-- Create an TABLE and overwrite if it already exists
DEFINE TABLE OVERWRITE example;

-- Using the type clause
DEFINE TABLE person TYPE ANY;

-- Just a RELATION table, no constraints on the type of table
DEFINE TABLE likes TYPE RELATION;

-- Define a relation table, and constrain the type of relation which can be stored
DEFINE TABLE likes TYPE RELATION FROM user TO post;
-- OR use IN and OUT alternatively to FROM and TO
DEFINE TABLE likes TYPE RELATION IN user OUT post;
-- To allow a link to one of a possible set of record types, use the | operator
DEFINE TABLE likes TYPE RELATION FROM user TO post|video;
DEFINE TABLE likes TYPE RELATION IN user OUT post|video;

-- Define a relation table, and constrain the type of relation which can be stored
DEFINE TABLE assigned_to SCHEMAFULL TYPE RELATION IN tag OUT sticky
    PERMISSIONS
        FOR create, select, update, delete
            WHERE in.owner == $auth.id AND out.author == $auth.id;

DEFINE TABLE road_to TYPE RELATION IN city OUT city ENFORCED;
