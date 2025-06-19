-- Define a PARAM
DEFINE PARAM $endpointBase VALUE "https://dummyjson.com";

-- Create a PARAM if it does not already exist
DEFINE PARAM IF NOT EXISTS $example VALUE 123;

-- Create an PARAM and overwrite if it already exists
DEFINE PARAM OVERWRITE $example VALUE 123;
