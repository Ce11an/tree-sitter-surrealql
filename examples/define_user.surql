-- Create the user with an owner role and some example durations
DEFINE USER username ON ROOT PASSWORD '123456' ROLES OWNER DURATION FOR SESSION 15m, FOR TOKEN 5s;

-- Specify the namespace
USE NS abcum;
-- Create the user with an editor role and some example durations
DEFINE USER username ON NAMESPACE PASSWORD '123456' ROLES EDITOR DURATION FOR SESSION 12h, FOR TOKEN 1m;

-- Specify the namespace and database for the user
USE NS abcum DB app_vitalsense;
-- Create the user with a viewer role and some example durations
DEFINE USER username ON DATABASE PASSWORD '123456' ROLES VIEWER DURATION FOR SESSION 5d, FOR TOKEN 2h;

-- Create a USER if it does not already exist
DEFINE USER IF NOT EXISTS example ON ROOT PASSWORD "example" ROLES OWNER;

-- Create an USER and overwrite if it already exists
DEFINE USER OVERWRITE example ON ROOT PASSWORD "example" ROLES OWNER;
