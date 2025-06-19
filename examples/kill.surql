-- Basic usage
LIVE SELECT DIFF FROM person;

KILL u"0189d6e3-8eac-703a-9a48-d9faa78b44b9";

-- Define the parameter
LET $live_query_id = u"0189d6e3-8eac-703a-9a48-d9faa78b44b9";
-- Use the parameter
KILL $live_query_id;
