-- Define a unique index
DEFINE INDEX userEmailIndex ON TABLE user COLUMNS email UNIQUE;

-- Define a non-unique index
DEFINE INDEX userAgeIndex ON TABLE user COLUMNS age;

-- Define a composite index
DEFINE INDEX test ON user FIELDS account, email;

-- Full-text search index
DEFINE INDEX userNameIndex ON TABLE user COLUMNS name SEARCH ANALYZER example_ascii BM25 HIGHLIGHTS;

-- Vector-search index
DEFINE INDEX idx_mtree_embedding ON Document FIELDS embeddings MTREE DIMENSION 4 TYPE I64;

-- Define M-Tree index
DEFINE INDEX idx_mtree_embedding_manhattan ON Document FIELDS embedding MTREE DIMENSION 4 DIST MANHATTAN;
DEFINE INDEX idx_mtree_embedding_cosine ON Document FIELDS embedding MTREE DIMENSION 4 DIST COSINE;
