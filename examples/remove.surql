-- Basic remove statement
REMOVE NAMESPACE surrealdb;

REMOVE DATABASE blog;

REMOVE USER writer ON NAMESPACE;

REMOVE USER writer ON DATABASE;

REMOVE EVENT new_post ON TABLE article;

-- Only works for Schemafull tables (i.e. tables with a schema)
REMOVE FIELD tags ON TABLE article;

REMOVE INDEX authors ON TABLE article;

REMOVE ANALYZER example_ascii;

REMOVE FUNCTION fn::update_author;

REMOVE PARAM $author;

REMOVE TABLE article;

-- Remove with if exists
REMOVE NAMESPACE IF EXISTS surrealdb;

REMOVE DATABASE IF EXISTS blog;

REMOVE USER IF EXISTS writer ON NAMESPACE;

REMOVE USER IF EXISTS writer ON DATABASE;

REMOVE EVENT IF EXISTS new_post ON TABLE article;

-- Only works for Schemaful tables (i.e. tables with a schema)
REMOVE FIELD IF EXISTS tags ON TABLE article;

REMOVE INDEX IF EXISTS authors ON TABLE article;

REMOVE ANALYZER IF EXISTS example_ascii;

REMOVE FUNCTION IF EXISTS fn::update_author;

REMOVE PARAM IF EXISTS $author;

REMOVE TABLE IF EXISTS article;


