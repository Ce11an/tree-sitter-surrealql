-- Define index
DEFINE INDEX uniq_isbn ON book FIELDS isbn UNIQUE;
-- Then rebuild it
REBUILD INDEX uniq_isbn ON book;

// Check that the index has been created
INFO FOR TABLE book;

REBUILD INDEX IF EXISTS idx_author ON book;

