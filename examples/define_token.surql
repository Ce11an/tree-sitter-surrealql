-- Set the name of the token
DEFINE TOKEN token_name
  -- Use this token provider for database authorization
  ON DATABASE
  -- Specify the cryptographic signature algorithm used to verify the token
  TYPE HS512
  -- Specify the secret used to sign and verify the authenticity of the token
  VALUE "sNSYneezcr8kqphfOC6NwwraUHJCVAt0XjsRSNmssBaBRh3WyMa9TRfq8ST7fsU2H2kGiOpU4GbAF1bCiXmM1b3JGgleBzz7rsrz6VvYEM4q3CLkcO8CMBIlhwhzWmy8";

-- Create a TOKEN if it does not already exist
DEFINE TOKEN IF NOT EXISTS example ON SCOPE example TYPE HS512 VALUE "example";

-- Create a TOKEN with overwrite
DEFINE TOKEN OVERWRITE example ON SCOPE example TYPE HS512 VALUE "example";

