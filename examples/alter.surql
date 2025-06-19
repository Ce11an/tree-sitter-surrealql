-- An example of ALTER to modify an existing table
DEFINE TABLE user SCHEMALESS;
DEFINE FIELD name ON TABLE user TYPE string;
CREATE user SET name = "LordofSalty";

-- Now make it schemafull to ensure that no other fields can be used
ALTER TABLE user SCHEMAFULL;

-- Will show up as DEFINE TABLE user TYPE ANY SCHEMAFULL PERMISSIONS NONE
DEFINE TABLE user SCHEMAFULL;

-- Now defined as DEFINE TABLE user TYPE ANY SCHEMAFULL PERMISSIONS FULL
ALTER TABLE user PERMISSIONS FOR create FULL;

ALTER TABLE IF EXISTS user SCHEMAFULL;
