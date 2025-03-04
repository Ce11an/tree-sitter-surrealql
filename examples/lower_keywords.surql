-- Select all fields from a table
select * from person;

-- Define the parameter
let $name = "tobie";
-- Use the parameter
create person set name = $name;
