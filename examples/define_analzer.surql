-- Tokenizers

-- blank
DEFINE ANALYZER example_blank TOKENIZERS blank;

-- camel
DEFINE ANALYZER example_camel TOKENIZERS camel;

-- class
DEFINE ANALYZER example_class TOKENIZERS class;

-- punct
DEFINE ANALYZER example_punct TOKENIZERS punct;

-- Filters

-- ascii
DEFINE ANALYZER example_ascii TOKENIZERS class FILTERS ascii;

-- ngram
DEFINE ANALYZER example_ngram TOKENIZERS class FILTERS ngram(1,3);

-- edgengram
DEFINE ANALYZER example_edgengram TOKENIZERS class FILTERS edgengram(1,3);

-- lowercase
DEFINE ANALYZER example_lowercase TOKENIZERS class FILTERS lowercase;

-- snowball
DEFINE ANALYZER example_snowball TOKENIZERS class FILTERS snowball(english);

-- uppercase
DEFINE ANALYZER example_uppercase TOKENIZERS class FILTERS uppercase;

-- Using `IF NOT EXISTS` clause

-- Create an `ANALYZER` if it does not already exist
DEFINE ANALYZER IF NOT EXISTS example TOKENIZERS blank;

-- Using `OVERWRITE` clause

-- Create an ANALYZER and overwrite if it already exists
DEFINE ANALYZER OVERWRITE example TOKENIZERS blank;

-- More examples

-- Creates a simple analyzer removing diacritics marks
DEFINE ANALYZER ascii TOKENIZERS class FILTERS lowercase,ascii;

-- Creates an analyzer suitable for English text
DEFINE ANALYZER english TOKENIZERS class FILTERS snowball(english);

-- Creates an analyzer suitable for auto-completion.
DEFINE ANALYZER autocomplete FILTERS lowercase,edgengram(2,10);

-- Creates an analyzer suitable for source code analysis.
DEFINE ANALYZER code TOKENIZERS class,camel FILTERS lowercase,ascii;

