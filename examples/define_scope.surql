-- Enable scope authentication directly in SurrealDB
DEFINE SCOPE account SESSION 24h
	SIGNUP ( CREATE user SET email = $email, pass = crypto::argon2::generate($pass) )
	SIGNIN ( SELECT * FROM user WHERE email = $email AND crypto::argon2::compare(pass, $pass) );

-- Create a SCOPE if it does not already exist
DEFINE SCOPE IF NOT EXISTS example;

-- Create a SCOPE with overwrite
DEFINE SCOPE OVERWRITE example;
