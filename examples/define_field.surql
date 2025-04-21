-- Declare the name of a field.
DEFINE FIELD email ON TABLE user;

-- Data types
DEFINE FIELD OVERWRITE fd ON c TYPE { a: string, b: number };
DEFINE FIELD OVERWRITE fd.* ON c TYPE number;
DEFINE FIELD emails.address ON TABLE user TYPE string;

-- Union data types
DEFINE FIELD user_id ON TABLE user TYPE uuid|int;

-- Using overwrite keyword
DEFINE FIELD OVERWRITE fd ON c TYPE { a: string, b: number };

-- Define individual fields on array
DEFINE FIELD metadata[0] ON person TYPE datetime;

-- Set field on array type
DEFINE FIELD roles ON TABLE user TYPE array<string>;

-- Set fields of array with multiple subtypes
DEFINE FIELD next_paths ON TABLE block TYPE array<"north" | "east" | "south" | "west", 4>;

-- Set option type
DEFINE FIELD user ON TABLE POST TYPE option<record<user>>;

-- Set flexible type
DEFINE FIELD metadata ON TABLE user FLEXIBLE TYPE object;

-- Using always and default
DEFINE FIELD primary ON product TYPE number DEFAULT ALWAYS 123.456;

--- Define empty object type
DEFINE FIELD tags ON post TYPE array<object> DEFAULT ALWAYS [];

-- Using the VALUE clause to set a field’s value
DEFINE FIELD updated ON TABLE user VALUE time::now();

-- Define field with assertion
DEFINE FIELD permissions ON TABLE acl TYPE array
  -- The array must not be empty because at least one permission is required to make a valid ACL
  -- The items in the array must also be restricted to specific permissions
  ASSERT
      array::len($value) > 0
      AND $value ALLINSIDE ["create", "read", "write", "delete"];

--- Using multiple data types for a complex record id
DEFINE FIELD id ON TABLE log TYPE [record, "info" | "warn" | "error", datetime];

