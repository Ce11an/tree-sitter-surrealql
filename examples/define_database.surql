-- Define database
DEFINE DATABASE app_vitalsense;

-- Create a DATABASE if it does not already exist
DEFINE DATABASE IF NOT EXISTS app_vitalsense;

-- Create a DATABASE and overwrite if it already exists
DEFINE DATABASE OVERWRITE app_vitalsense;

-- Create a DATABASE and overwrite if it already exists with a comment
DEFINE DATABASE OVERWRITE app_vitalsense COMMENT "This is a comment";
