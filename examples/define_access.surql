-- Create a RECORD access method for accounts
-- On successful authentication, a token expiring after 15 minutes will be returned
-- This token can be used to establish a session that will expire after 6 hours
-- The token will be automatically used to authenticate the session
DEFINE ACCESS account ON DATABASE TYPE RECORD
	SIGNUP ( CREATE user SET email = $email, pass = crypto::argon2::generate($pass) )
	SIGNIN ( SELECT * FROM user WHERE email = $email AND crypto::argon2::compare(pass, $pass) )
	DURATION FOR TOKEN 15m, FOR SESSION 12h;

-- Define bearer access method to generate API keys for system users
DEFINE ACCESS api ON DATABASE TYPE BEARER FOR USER DURATION FOR GRANT 10d;

-- Define bearer access method to generate API keys for record users
DEFINE ACCESS api ON DATABASE TYPE BEARER FOR RECORD DURATION FOR GRANT 10d;

-- Set the name of the token
DEFINE ACCESS token_name
  -- Use this token provider for database authentication
  ON DATABASE
  -- Specify the type of access being defined
  TYPE JWT
  -- Specify the cryptographic signature algorithm used to verify the token
  ALGORITHM HS512
  -- Specify the symmetric key used to sign and verify the authenticity of the token
  KEY "sNSYneezcr8kqphfOC6NwwraUHJCVAt0XjsRSNmssBaBRh3WyMa9TRfq8ST7fsU2H2kGiOpU4GbAF1bCiXmM1b3JGgleBzz7rsrz6VvYEM4q3CLkcO8CMBIlhwhzWmy8";

-- Define access with authentication clause
DEFINE ACCESS user ON DATABASE TYPE JWT
ALGORITHM HS512 KEY "sNSYneezcr8kqphfOC6NwwraUHJCVAt0XjsRSNmssBaBRh3WyMa9TRfq8ST7fsU2H2kGiOpU4GbAF1bCiXmM1b3JGgleBzz7rsrz6VvYEM4q3CLkcO8CMBIlhwhzWmy8"
AUTHENTICATE {
  IF $token.iss != "surrealdb-test" { THROW "Invalid token issuer" };
  IF type::is::array($token.aud) {
    IF "surrealdb-test" NOT IN $token.aud { THROW "Invalid token audience" }
  } ELSE {
    IF $token.aud IS NOT "surrealdb-test" { THROW "Invalid token audience" }
  };
}
DURATION FOR SESSION 2h;
