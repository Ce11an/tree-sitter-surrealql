module.exports = grammar({
  name: "surrealql",

  extras: $ => [$.comment, /\s/],

  conflicts: $ => [
    [$.statement, $.expression],
    [$.expression, $.control_statement],
    [$.expression, $.argument_list_count],
    [$.cast_expression, $.path_expression],
  ],

  precedences: $ => [
    ["assignment", "=", "+=", "-="],
    ["logical_or", "||", "??", "?:"],
    ["logical_and", "&&"],
    ["equality", "==", "!=", "?=", "*="],
    ["relational", "<", ">", "<=", ">="],
    ["additive", "+", "-"],
    ["multiplicative", "*", "×", "/", "÷"],
    ["exponential", "**"],
    ["unary", "!", "NOT"],
    ["postfix", ".", "[", "("],
  ],

  rules: {
    source_file: $ => optional($.expressions),

    // Tokens
    comment: _ =>
      token(
        choice(
          seq("--", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
          seq("#", /.*/),
          seq("//", /.*/),
          seq("-------- Query", /.*/),
          seq("-------- Result", /.*/),
        ),
      ),

    semi_colon: _ => ";",

    // Keywords grouped by functionality

    // Core statement keywords
    SELECT: _ => make_keyword("SELECT"),
    FROM: _ => make_keyword("FROM"),
    WHERE: _ => make_keyword("WHERE"),
    CREATE: _ => make_keyword("CREATE"),
    UPDATE: _ => make_keyword("UPDATE"),
    DELETE: _ => make_keyword("DELETE"),
    INSERT: _ => make_keyword("INSERT"),
    UPSERT: _ => make_keyword("UPSERT"),
    RELATE: _ => make_keyword("RELATE"),
    DEFINE: _ => make_keyword("DEFINE"),
    REMOVE: _ => make_keyword("REMOVE"),
    ALTER: _ => make_keyword("ALTER"),

    // Control flow keywords
    IF: _ => make_keyword("IF"),
    ELSE: _ => make_keyword("ELSE"),
    FOR: _ => make_keyword("FOR"),
    LET: _ => make_keyword("LET"),
    RETURN: _ => make_keyword("RETURN"),
    BREAK: _ => make_keyword("BREAK"),
    CONTINUE: _ => make_keyword("CONTINUE"),
    THROW: _ => make_keyword("THROW"),

    // Logical operators
    AND: _ => make_keyword("AND"),
    OR: _ => make_keyword("OR"),
    NOT: _ => make_keyword("NOT"),
    IS: _ => make_keyword("IS"),

    // Literals
    TRUE: _ => make_keyword("TRUE"),
    FALSE: _ => make_keyword("FALSE"),
    NULL: _ => make_keyword("NULL"),
    NONE: _ => make_keyword("NONE"),

    // Modifiers
    ONLY: _ => make_keyword("ONLY"),
    VALUE: _ => make_keyword("VALUE"),
    AS: _ => make_keyword("AS"),
    ON: _ => make_keyword("ON"),
    SET: _ => make_keyword("SET"),
    UNSET: _ => make_keyword("UNSET"),
    BY: _ => make_keyword("BY"),
    IN: _ => make_keyword("IN"),
    TO: _ => make_keyword("TO"),
    INTO: _ => make_keyword("INTO"),
    WITH: _ => make_keyword("WITH"),

    // Transaction keywords
    BEGIN: _ => make_keyword("BEGIN"),
    COMMIT: _ => make_keyword("COMMIT"),
    CANCEL: _ => make_keyword("CANCEL"),
    TRANSACTION: _ => make_keyword("TRANSACTION"),

    // Additional keywords consolidated
    EXISTS: _ => make_keyword("EXISTS"),
    OVERWRITE: _ => make_keyword("OVERWRITE"),
    ALWAYS: _ => make_keyword("ALWAYS"),
    READONLY: _ => make_keyword("READONLY"),
    FLEXIBLE: _ => make_keyword("FLEXIBLE"),

    // Schema keywords
    TABLE: _ => make_keyword("TABLE"),
    FIELD: _ => make_keyword("FIELD"),
    INDEX: _ => make_keyword("INDEX"),
    EVENT: _ => make_keyword("EVENT"),
    FUNCTION: _ => make_keyword("FUNCTION"),
    NAMESPACE: _ => make_keyword("NAMESPACE"),
    DATABASE: _ => make_keyword("DATABASE"),
    SCOPE: _ => make_keyword("SCOPE"),
    PARAM: _ => make_keyword("PARAM"),
    ACCESS: _ => make_keyword("ACCESS"),
    USER: _ => make_keyword("USER"),
    TOKEN: _ => make_keyword("TOKEN"),
    ANALYZER: _ => make_keyword("ANALYZER"),

    // Type keywords
    TYPE: _ => make_keyword("TYPE"),
    SCHEMAFULL: _ => make_keyword("SCHEMAFULL"),
    SCHEMALESS: _ => make_keyword("SCHEMALESS"),
    ANY: _ => make_keyword("ANY"),
    NORMAL: _ => make_keyword("NORMAL"),
    RELATION: _ => make_keyword("RELATION"),

    // Query clause keywords
    ORDER: _ => make_keyword("ORDER"),
    GROUP: _ => make_keyword("GROUP"),
    LIMIT: _ => make_keyword("LIMIT"),
    FETCH: _ => make_keyword("FETCH"),
    SPLIT: _ => make_keyword("SPLIT"),
    TIMEOUT: _ => make_keyword("TIMEOUT"),
    PARALLEL: _ => make_keyword("PARALLEL"),
    EXPLAIN: _ => make_keyword("EXPLAIN"),

    // Content/modification keywords
    CONTENT: _ => make_keyword("CONTENT"),
    MERGE: _ => make_keyword("MERGE"),
    PATCH: _ => make_keyword("PATCH"),
    REPLACE: _ => make_keyword("REPLACE"),

    // Time/versioning
    BEFORE: _ => make_keyword("BEFORE"),
    AFTER: _ => make_keyword("AFTER"),
    DIFF: _ => make_keyword("DIFF"),
    LIVE: _ => make_keyword("LIVE"),
    CHANGES: _ => make_keyword("CHANGES"),
    SINCE: _ => make_keyword("SINCE"),

    // Permission keywords
    PERMISSIONS: _ => make_keyword("PERMISSIONS"),
    FULL: _ => make_keyword("FULL"),

    // Other statement keywords
    INFO: _ => make_keyword("INFO"),
    SHOW: _ => make_keyword("SHOW"),
    USE: _ => make_keyword("USE"),
    KILL: _ => make_keyword("KILL"),
    SLEEP: _ => make_keyword("SLEEP"),
    REBUILD: _ => make_keyword("REBUILD"),

    // Utility keywords
    COUNT: _ => make_keyword("COUNT"),
    DEFAULT: _ => make_keyword("DEFAULT"),
    ASSERT: _ => make_keyword("ASSERT"),
    COMMENT: _ => make_keyword("COMMENT"),

    // Level identifiers
    ROOT: _ => make_keyword("ROOT"),
    NS: _ => make_keyword("NS"),
    DB: _ => make_keyword("DB"),

    // Additional keywords (keeping most needed ones)
    OUT: _ => make_keyword("OUT"),
    DROP: _ => make_keyword("DROP"),
    UNIQUE: _ => make_keyword("UNIQUE"),
    SEARCH: _ => make_keyword("SEARCH"),
    IGNORE: _ => make_keyword("IGNORE"),
    VALUES: _ => make_keyword("VALUES"),
    WHEN: _ => make_keyword("WHEN"),
    THEN: _ => make_keyword("THEN"),
    OMIT: _ => make_keyword("OMIT"),
    AT: _ => make_keyword("AT"),
    FIELDS: _ => make_keyword("FIELDS"),
    COLUMNS: _ => make_keyword("COLUMNS"),

    // Sort and collation
    ASC: _ => make_keyword("ASC"),
    DESC: _ => make_keyword("DESC"),
    RAND: _ => make_keyword("RAND"),
    COLLATE: _ => make_keyword("COLLATE"),
    NUMERIC: _ => make_keyword("NUMERIC"),

    // Index types
    NOINDEX: _ => make_keyword("NOINDEX"),

    // Container operators
    CONTAINS: _ => make_keyword("CONTAINS"),
    INSIDE: _ => make_keyword("INSIDE"),
    OUTSIDE: _ => make_keyword("OUTSIDE"),
    INTERSECTS: _ => make_keyword("INTERSECTS"),

    // Additional container operators (consolidated to reduce states)
    container_operator: _ =>
      choice(
        make_keyword("CONTAINSNOT"),
        make_keyword("CONTAINSALL"),
        make_keyword("CONTAINSANY"),
        make_keyword("CONTAINSNONE"),
        make_keyword("NOTINSIDE"),
        make_keyword("ALLINSIDE"),
        make_keyword("ANYINSIDE"),
        make_keyword("NONEINSIDE"),
      ),

    // Distance functions (consolidated)
    distance_function: _ =>
      choice(
        make_keyword("CHEBYSHEV"),
        make_keyword("COSINE"),
        make_keyword("EUCLIDEAN"),
        make_keyword("HAMMING"),
        make_keyword("JACCARD"),
        make_keyword("MANHATTAN"),
        make_keyword("MINKOWSKI"),
        make_keyword("PEARSON"),
      ),

    // JWT algorithms (consolidated)
    jwt_algorithm: _ =>
      choice(
        make_keyword("JWKS"),
        make_keyword("EDDSA"),
        make_keyword("ES256"),
        make_keyword("ES384"),
        make_keyword("ES512"),
        make_keyword("PS256"),
        make_keyword("PS384"),
        make_keyword("PS512"),
        make_keyword("RS256"),
        make_keyword("RS384"),
        make_keyword("RS512"),
        make_keyword("HS256"),
        make_keyword("HS384"),
        make_keyword("HS512"),
      ),

    // Search and index keywords (consolidated)
    search_keyword: _ =>
      choice(
        make_keyword("BM25"),
        make_keyword("DOC_IDS_CACHE"),
        make_keyword("DOC_IDS_ORDER"),
        make_keyword("DOC_LENGTHS_CACHE"),
        make_keyword("DOC_LENGTHS_ORDER"),
        make_keyword("POSTINGS_CACHE"),
        make_keyword("POSTINGS_ORDER"),
        make_keyword("TERMS_CACHE"),
        make_keyword("TERMS_ORDER"),
        make_keyword("HIGHLIGHTS"),
      ),

    // Additional consolidated keywords
    auth_keyword: _ =>
      choice(
        make_keyword("SESSION"),
        make_keyword("SIGNIN"),
        make_keyword("SIGNUP"),
        make_keyword("PASSWORD"),
        make_keyword("PASSHASH"),
        make_keyword("ROLES"),
        make_keyword("OWNER"),
        make_keyword("EDITOR"),
        make_keyword("VIEWER"),
        make_keyword("DURATION"),
        make_keyword("ALGORITHM"),
        make_keyword("KEY"),
        make_keyword("URL"),
        make_keyword("JWT"),
        make_keyword("ISSUER"),
        make_keyword("REFRESH"),
        make_keyword("RECORD"),
        make_keyword("BEARER"),
        make_keyword("AUTHENTICATE"),
        make_keyword("GRANT"),
      ),

    index_keyword: _ =>
      choice(
        make_keyword("MTREE"),
        make_keyword("DIMENSION"),
        make_keyword("DIST"),
        make_keyword("EFC"),
        make_keyword("M"),
        make_keyword("CAPACITY"),
        make_keyword("HNSW"),
        make_keyword("ENFORCED"),
        make_keyword("CHANGEFEED"),
      ),

    misc_keyword: _ =>
      choice(
        make_keyword("TOKENIZERS"),
        make_keyword("FILTERS"),
        make_keyword("ON DUPLICATE KEY UPDATE"),
      ),

    // Expressions
    expressions: $ =>
      seq(
        $.statement,
        repeat(seq($.semi_colon, $.statement)),
        optional($.semi_colon),
      ),

    statement: $ =>
      choice(
        $.select_statement,
        $.create_statement,
        $.update_statement,
        $.delete_statement,
        $.insert_statement,
        $.upsert_statement,
        $.relate_statement,
        $.define_statement,
        $.remove_statement,
        $.alter_statement,
        $.control_statement,
        $.transaction_statement,
        $.utility_statement,
        $.expression,
      ),

    expression: $ => choice($.value, $.if_expression),

    // Statement categories

    control_statement: $ =>
      choice(
        $.if_expression,
        $.for_statement,
        $.let_statement,
        $.return_statement,
        $.throw_statement,
        $.break_statement,
        $.continue_statement,
      ),

    transaction_statement: $ =>
      choice($.begin_statement, $.commit_statement, $.cancel_statement),

    utility_statement: $ =>
      choice(
        $.use_statement,
        $.info_statement,
        $.show_statement,
        $.kill_statement,
        $.sleep_statement,
        $.rebuild_index_statement,
      ),

    define_statement: $ =>
      choice(
        $.define_table_statement,
        $.define_field_statement,
        $.define_index_statement,
        $.define_event_statement,
        $.define_function_statement,
        $.define_analyzer_statement,
        $.define_database_statement,
        $.define_namespace_statement,
        $.define_param_statement,
        $.define_scope_statement,
        $.define_access_statement,
        $.define_token_statement,
        $.define_user_statement,
      ),

    // Simplified value hierarchy
    value: $ => choice($.binary_expression, $.assignment_expression),

    literal: $ =>
      choice(
        $.string,
        $.prefixed_string,
        $.number,
        $.duration,
        $.point,
        $.TRUE,
        $.FALSE,
        $.NULL,
        $.NONE,
      ),

    // Binary expressions with proper precedence chain
    binary_expression: $ => $.logical_or_expression,

    logical_or_expression: $ =>
      choice(
        $.logical_and_expression,
        prec(1, seq("(", $.binary_expression, ")")),
        prec.left(
          "logical_or",
          seq(
            field("left", $.logical_or_expression),
            field("operator", choice("||", "??", "?:", $.OR)),
            field("right", $.logical_and_expression),
          ),
        ),
      ),

    logical_and_expression: $ =>
      choice(
        $.equality_expression,
        prec.left(
          "logical_and",
          seq(
            field("left", $.logical_and_expression),
            field("operator", choice("&&", $.AND)),
            field("right", $.equality_expression),
          ),
        ),
      ),

    equality_expression: $ =>
      choice(
        $.relational_expression,
        prec.left(
          "equality",
          seq(
            field("left", $.equality_expression),
            field("operator", choice("==", "!=", "?=", "*=")),
            field("right", $.relational_expression),
          ),
        ),
      ),

    relational_expression: $ =>
      choice(
        $.additive_expression,
        prec.left(
          "relational",
          seq(
            field("left", $.relational_expression),
            field(
              "operator",
              choice(
                "<",
                ">",
                "<=",
                ">=",
                $.IS,
                $.is_not_operator,
                $.CONTAINS,
                $.container_operator,
                $.INSIDE,
                $.OUTSIDE,
                $.INTERSECTS,
                $.IN,
                $.not_in_operator,
                seq("@", $.number, "@"),
                seq(
                  "<|",
                  $.number,
                  optional(seq(",", $.distance_function)),
                  "|>",
                ),
                "~",
                "!~",
                "*~",
                "∋",
                "∌",
                "⊇",
                "⊃",
                "⊅",
                "∈",
                "∉",
                "⊆",
                "⊂",
                "⊄",
                "@@",
              ),
            ),
            field("right", $.additive_expression),
          ),
        ),
      ),

    is_not_operator: $ => prec(2, seq($.IS, $.NOT)),
    not_in_operator: $ => prec(2, seq($.NOT, $.IN)),

    additive_expression: $ =>
      choice(
        $.multiplicative_expression,
        prec.left(
          "additive",
          seq(
            field("left", $.additive_expression),
            field("operator", choice("+", "-")),
            field("right", $.multiplicative_expression),
          ),
        ),
      ),

    multiplicative_expression: $ =>
      choice(
        $.exponential_expression,
        prec.left(
          "multiplicative",
          seq(
            field("left", $.multiplicative_expression),
            field("operator", choice("*", "×", "/", "÷")),
            field("right", $.exponential_expression),
          ),
        ),
      ),

    exponential_expression: $ =>
      choice(
        $.primary_expression,
        prec.right(
          "exponential",
          seq(
            field("left", $.primary_expression),
            field("operator", "**"),
            field("right", $.exponential_expression),
          ),
        ),
      ),

    primary_expression: $ =>
      choice($.atom, $.unary_expression, $.cast_expression, $.path_expression),

    unary_expression: $ =>
      choice(
        prec.right("unary", seq(field("operator", "!"), $.atom)),
        prec.right("unary", seq(field("operator", "-"), $.atom)),
      ),

    atom: $ =>
      choice(
        $.literal,
        $.identifier,
        $.variable_name,
        $.function_call,
        $.record_id,
        $.array,
        $.object,
        $.subquery,
        $.range,
      ),

    assignment_expression: $ =>
      prec.right(
        "assignment",
        seq(
          field("left", $.assignable),
          field("operator", $.assignment_operator),
          field("right", $.binary_expression),
        ),
      ),

    assignable: $ => choice($.identifier, $.path_expression),

    cast_expression: $ => prec("postfix", seq("<", $.type_name, ">", $.atom)),

    path_expression: $ =>
      prec.left(
        "postfix",
        choice(
          seq($.base_atom, repeat1($.path_element)),
          seq($.graph_traversal, repeat($.path_element)),
        ),
      ),

    base_atom: $ =>
      choice(
        $.identifier,
        $.variable_name,
        $.function_call,
        $.record_id,
        $.array,
        $.object,
      ),

    path_element: $ =>
      choice($.graph_traversal, $.property_access, $.array_access, $.filter),

    graph_traversal: $ =>
      seq(
        field("direction", choice("<-", "->", "<->")),
        field(
          "edge",
          choice(
            $.identifier,
            "?",
            seq("(", commaSeparated($.graph_predicate), ")"),
          ),
        ),
      ),

    property_access: $ =>
      seq(
        ".",
        choice(
          prec(1, seq($.identifier, $.argument_list)),
          seq($.function_name, $.argument_list),
          $.identifier,
          "*",
        ),
      ),

    array_access: $ => seq("[", $.value, "]"),

    assignment_operator: _ => choice("=", "+=", "-="),

    subquery: $ => seq("(", $.statement, ")"),

    version: $ => seq("<", $.version_number, ">"),

    argument_list: $ => seq("(", optional(commaSeparated($.value)), ")"),

    argument_list_count: $ =>
      seq("(", optional(choice(commaSeparated($.value), $.statement)), ")"),

    distance_values: $ =>
      choice($.number, $.distance_function, seq($.distance_function, $.number)),

    // Lexical tokens
    string: _ => /'([^'\\]|\\.)*'|"([^"\\]|\\.)*"/,
    prefixed_string: _ => /[ruds]('([^'\\]|\\.)*'|"([^"\\]|\\.)*")/,
    number: $ => choice($.int, $.float, $.decimal),
    int: _ => /-?[0-9]+/,
    float: _ => /-?[0-9]+\.[0-9]+([eE][+-]?[0-9]+)?f?/,
    decimal: _ => /-?[0-9]+\.[0-9]+([eE][+-]?[0-9]+)?dec/,
    variable_name: _ => /\$[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    custom_function_name: _ => /fn(::[a-zA-Z_][a-zA-Z0-9_]*)*/,
    function_name: _ => /[a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)*/,
    version_number: _ => /[0-9]+(\.[0-9]+(\.[0-9]+)?)?/,

    // Complex structures
    array: $ => seq("[", optional(commaSeparatedTrailing($.value)), "]"),
    object: $ => seq("{", optional($.object_content), "}"),
    object_content: $ => commaSeparatedTrailing($.object_property),
    object_property: $ =>
      seq(
        field("key", choice($.object_key, $.string)),
        ":",
        field("value", $.value),
      ),
    object_key: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    range: $ => seq($.number, "..", optional("="), $.number),

    point: $ => seq("(", $.decimal, ",", $.decimal, ")"),

    duration: $ => repeat1($.duration_part),
    duration_part: _ => /[0-9]+\s*(ns|us|µs|ms|s|m|h|d|w|y)/,

    // Placeholder for unimplemented statements - TODO: implement these
    kill_statement: $ => seq($.KILL, $.value),
    sleep_statement: $ => seq($.SLEEP, $.duration),
    break_statement: $ => $.BREAK,
    continue_statement: $ => $.CONTINUE,

    for_statement: $ => seq($.FOR, $.variable_name, $.IN, $.value, $.block),

    return_statement: $ => $.return_clause,

    throw_statement: $ => seq($.THROW, $.value),

    if_expression: $ =>
      seq(
        $.IF,
        $.value,
        $.block,
        repeat($.else_if_clause),
        optional($.else_clause),
      ),

    else_if_clause: $ => seq($.ELSE, $.IF, $.value, $.block),

    else_clause: $ => seq($.ELSE, $.block),

    let_statement: $ => seq($.LET, $.variable_name, "=", $.expression),

    // Enhanced statement implementations
    select_statement: $ =>
      seq($.select_clause, optional($.omit_clause), $.from_clause),

    select_clause: $ =>
      seq(
        $.SELECT,
        choice(
          seq($.VALUE, $.predicate),
          commaSeparated($.inclusive_predicate),
        ),
      ),

    from_clause: $ =>
      seq(
        $.FROM,
        optional($.ONLY),
        commaSeparated($.value),
        optional($.where_clause),
        optional($.order_clause),
        optional($.limit_clause),
        optional($.timeout_clause),
      ),

    predicate: $ => choice($.value, seq($.value, $.AS, $.identifier)),
    inclusive_predicate: $ => choice("*", $.predicate),

    omit_clause: $ => seq($.OMIT, $.value),
    order_clause: $ =>
      seq($.ORDER, optional($.BY), commaSeparated($.order_criteria)),
    order_criteria: $ => seq($.value, optional(choice($.ASC, $.DESC))),
    limit_clause: $ => seq($.LIMIT, $.number),
    timeout_clause: $ => seq($.TIMEOUT, $.duration),

    create_statement: $ =>
      seq(
        $.CREATE,
        optional($.ONLY),
        $.create_target,
        optional(choice($.content_clause, $.set_clause)),
        optional($.return_clause),
        optional($.timeout_clause),
      ),

    create_target: $ => choice(commaSeparated($.value), $.multi_record),
    content_clause: $ => seq($.CONTENT, choice($.object, $.variable_name)),
    set_clause: $ => seq($.SET, commaSeparated($.field_assignment)),
    field_assignment: $ => seq($.identifier, $.assignment_operator, $.value),

    update_statement: $ =>
      seq(
        $.UPDATE,
        optional($.ONLY),
        commaSeparated($.value),
        optional(
          choice(
            $.content_clause,
            $.merge_clause,
            $.set_clause,
            $.unset_clause,
          ),
        ),
        optional($.where_clause),
        optional($.return_clause),
        optional($.timeout_clause),
      ),

    merge_clause: $ => seq($.MERGE, $.object),
    unset_clause: $ => seq($.UNSET, commaSeparated($.identifier)),

    delete_statement: $ =>
      seq(
        $.DELETE,
        optional($.ONLY),
        commaSeparated($.value),
        optional($.where_clause),
        optional($.return_clause),
        optional($.timeout_clause),
      ),

    insert_statement: $ =>
      seq(
        $.INSERT,
        optional($.IGNORE),
        $.INTO,
        $.identifier,
        choice(
          $.object,
          seq("[", commaSeparated($.object), "]"),
          seq(
            "(",
            commaSeparated($.identifier),
            ")",
            $.VALUES,
            commaSeparated(seq("(", commaSeparated($.value), ")")),
          ),
        ),
      ),

    upsert_statement: $ =>
      seq(
        $.UPSERT,
        optional($.ONLY),
        commaSeparated($.value),
        optional(choice($.content_clause, $.merge_clause, $.set_clause)),
        optional($.where_clause),
        optional($.return_clause),
        optional($.timeout_clause),
      ),

    relate_statement: $ =>
      seq(
        $.RELATE,
        optional($.ONLY),
        $.relate_subject,
        "->",
        $.relate_subject,
        "->",
        $.relate_subject,
        optional(choice($.content_clause, $.set_clause)),
        optional($.return_clause),
        optional($.timeout_clause),
      ),

    relate_subject: $ =>
      choice(
        $.array,
        $.identifier,
        $.function_call,
        $.variable_name,
        $.record_id,
      ),

    remove_statement: $ =>
      seq(
        $.REMOVE,
        choice(
          seq($.NAMESPACE, optional($.if_exists_clause), $.identifier),
          seq($.DATABASE, optional($.if_exists_clause), $.identifier),
          seq($.TABLE, optional($.if_exists_clause), $.identifier),
          seq(
            $.FIELD,
            optional($.if_exists_clause),
            $.identifier,
            optional(seq($.ON, $.TABLE)),
            $.identifier,
          ),
          seq(
            $.INDEX,
            optional($.if_exists_clause),
            $.identifier,
            optional(seq($.ON, $.TABLE)),
            $.identifier,
          ),
          seq(
            $.EVENT,
            optional($.if_exists_clause),
            $.identifier,
            optional(seq($.ON, $.TABLE)),
            $.identifier,
          ),
          seq($.FUNCTION, optional($.if_exists_clause), $.custom_function_name),
          seq($.PARAM, optional($.if_exists_clause), $.variable_name),
          seq($.SCOPE, optional($.if_exists_clause), $.identifier),
          seq($.ACCESS, optional($.if_exists_clause), $.identifier),
          seq(
            $.TOKEN,
            optional($.if_exists_clause),
            $.identifier,
            $.ON,
            choice($.ROOT, $.NAMESPACE, $.SCOPE),
          ),
          seq(
            $.USER,
            optional($.if_exists_clause),
            $.identifier,
            $.ON,
            choice($.ROOT, $.NAMESPACE, $.DATABASE),
          ),
          seq($.ANALYZER, optional($.if_exists_clause), $.identifier),
        ),
      ),

    alter_statement: $ =>
      seq(
        $.ALTER,
        $.TABLE,
        optional($.if_exists_clause),
        $.identifier,
        repeat(
          choice(
            $.DROP,
            $.SCHEMAFULL,
            $.SCHEMALESS,
            $.permissions_clause,
            $.comment_clause,
          ),
        ),
      ),

    // Enhanced define statements
    define_table_statement: $ =>
      seq(
        $.DEFINE,
        $.TABLE,
        optional(choice($.keyword_overwrite, $.if_not_exists_clause)),
        $.identifier,
        optional($.DROP),
        optional(choice($.SCHEMAFULL, $.SCHEMALESS)),
        optional($.table_type_clause),
        optional($.table_view_clause),
        optional($.permissions_clause),
        optional($.comment_clause),
      ),

    table_type_clause: $ =>
      seq(
        $.TYPE,
        choice(
          $.ANY,
          $.NORMAL,
          seq(
            $.RELATION,
            optional(
              seq(choice($.IN, $.FROM), commaSeparated($.record_or_separated)),
            ),
            optional(
              seq(choice($.OUT, $.TO), commaSeparated($.record_or_separated)),
            ),
            optional($.index_keyword), // ENFORCED
          ),
        ),
      ),

    table_view_clause: $ =>
      seq(
        $.AS,
        $.SELECT,
        commaSeparated($.inclusive_predicate),
        $.FROM,
        commaSeparated($.value),
        optional($.where_clause),
        optional($.group_clause),
      ),

    group_clause: $ =>
      seq($.GROUP, optional($.BY), commaSeparated($.identifier)),

    record_or_separated: $ =>
      prec(2, seq($.identifier, repeat(seq("|", $.identifier)))),

    define_field_statement: $ =>
      seq(
        $.DEFINE,
        $.FIELD,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        commaSeparated($.inclusive_predicate),
        $.on_table_clause,
        repeat(
          choice(
            $.type_clause,
            $.default_clause,
            $.readonly_clause,
            $.value_clause,
            $.assert_clause,
            $.permissions_clause,
            $.comment_clause,
          ),
        ),
      ),

    on_table_clause: $ => seq($.ON, optional($.TABLE), $.identifier),
    type_clause: $ => seq(optional($.FLEXIBLE), $.TYPE, $.type_name),
    default_clause: $ => seq($.DEFAULT, optional($.ALWAYS), $.value),
    readonly_clause: $ => $.READONLY,
    value_clause: $ => seq($.VALUE, $.value),
    assert_clause: $ => seq($.ASSERT, $.value),

    define_index_statement: $ =>
      seq(
        $.DEFINE,
        $.INDEX,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        $.on_table_clause,
        $.fields_columns_clause,
        repeat(
          choice(
            $.UNIQUE,
            $.search_analyzer_clause,
            $.mtree_dimension_clause,
            $.hnsw_dimension_clause,
          ),
        ),
      ),

    fields_columns_clause: $ =>
      seq(choice($.FIELDS, $.COLUMNS), commaSeparated($.identifier)),
    search_analyzer_clause: $ =>
      seq($.SEARCH, $.ANALYZER, $.identifier, repeat($.search_keyword)),
    mtree_dimension_clause: $ =>
      seq(make_keyword("MTREE"), make_keyword("DIMENSION"), $.number),
    hnsw_dimension_clause: $ =>
      seq(make_keyword("HNSW"), make_keyword("DIMENSION"), $.number),

    define_event_statement: $ =>
      seq(
        $.DEFINE,
        $.EVENT,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        $.on_table_clause,
        $.when_then_clause,
        optional($.comment_clause),
      ),

    when_then_clause: $ =>
      seq(
        optional(seq($.WHEN, $.value)),
        optional($.THEN),
        commaSeparated(choice($.subquery, $.block)),
      ),

    define_function_statement: $ =>
      seq(
        $.DEFINE,
        $.FUNCTION,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.custom_function_name,
        $.param_list,
        $.block,
        repeat(choice($.permissions_clause, $.comment_clause)),
      ),

    define_analyzer_statement: $ =>
      seq(
        $.DEFINE,
        $.ANALYZER,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        repeat(
          choice(
            $.tokenizers_clause,
            $.filters_clause,
            $.function_clause,
            $.comment_clause,
          ),
        ),
      ),

    tokenizers_clause: $ =>
      seq($.misc_keyword, commaSeparated($.analyzer_tokenizers)), // TOKENIZERS
    filters_clause: $ =>
      seq($.misc_keyword, commaSeparated($.analyzer_filters)), // FILTERS
    function_clause: $ => seq($.FUNCTION, $.custom_function_name),

    define_database_statement: $ =>
      seq(
        $.DEFINE,
        $.DATABASE,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        optional($.comment_clause),
      ),

    define_namespace_statement: $ =>
      seq(
        $.DEFINE,
        $.NAMESPACE,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        optional($.comment_clause),
      ),

    define_param_statement: $ =>
      seq(
        $.DEFINE,
        $.PARAM,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.variable_name,
        $.VALUE,
        $.value,
      ),

    define_scope_statement: $ =>
      seq(
        $.DEFINE,
        $.SCOPE,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        repeat(
          choice(
            $.session_clause,
            $.signin_clause,
            $.signup_clause,
            $.comment_clause,
          ),
        ),
      ),

    session_clause: $ => seq(make_keyword("SESSION"), $.duration),
    signin_clause: $ =>
      seq(make_keyword("SIGNIN"), choice($.subquery, $.block)),
    signup_clause: $ =>
      seq(make_keyword("SIGNUP"), choice($.subquery, $.block)),

    define_access_statement: $ =>
      seq(
        $.DEFINE,
        $.ACCESS,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        $.ON,
        choice($.ROOT, $.NAMESPACE, $.SCOPE, $.DATABASE),
        $.TYPE,
        choice(
          seq(
            $.auth_keyword,
            choice(
              // JWT
              seq($.auth_keyword, $.identifier, $.auth_keyword, $.string), // ALGORITHM ... KEY
              seq($.auth_keyword, $.string), // URL
            ),
          ),
          seq(
            $.auth_keyword, // RECORD
            optional(seq($.auth_keyword, "(", $.create_statement, ")")), // SIGNUP
            optional(seq($.auth_keyword, "(", $.select_statement, ")")), // SIGNIN
            optional(
              seq(
                $.WITH,
                $.auth_keyword,
                choice(
                  // JWT
                  seq($.auth_keyword, $.identifier, $.auth_keyword, $.string), // ALGORITHM ... KEY
                  seq($.auth_keyword, $.string), // URL
                ),
              ),
            ),
          ),
          seq($.auth_keyword, $.FOR, choice($.USER, $.auth_keyword)), // BEARER FOR USER/RECORD
        ),
        optional(seq($.auth_keyword, $.block)), // AUTHENTICATE
        optional($.duration_clause),
      ),

    duration_clause: $ =>
      seq(
        $.auth_keyword, // DURATION
        commaSeparated(
          choice(
            seq($.FOR, $.auth_keyword, $.duration), // FOR GRANT/TOKEN/SESSION
            seq($.FOR, $.auth_keyword, $.duration),
            seq($.FOR, $.auth_keyword, $.duration),
          ),
        ),
      ),

    define_token_statement: $ =>
      seq(
        $.DEFINE,
        $.TOKEN,
        optional(choice($.keyword_overwrite, $.if_not_exists_clause)),
        $.identifier,
        $.ON,
        choice($.ROOT, $.DATABASE, $.NAMESPACE, seq($.SCOPE, $.identifier)),
        $.token_type_clause,
        $.VALUE,
        $.string,
        optional($.comment_clause),
      ),

    token_type_clause: $ => seq($.TYPE, $.jwt_algorithm),

    define_user_statement: $ =>
      seq(
        $.DEFINE,
        $.USER,
        optional(choice($.keyword_overwrite, $.if_not_exists_clause)),
        $.identifier,
        $.ON,
        choice($.ROOT, $.NAMESPACE, $.DATABASE),
        choice(
          seq($.auth_keyword, $.string), // PASSWORD
          seq($.auth_keyword, $.string), // PASSHASH
        ),
        $.auth_keyword, // ROLES
        choice($.auth_keyword, $.auth_keyword, $.auth_keyword), // OWNER/EDITOR/VIEWER
        optional($.duration_clause),
      ),

    // Transaction statements
    begin_statement: $ => seq($.BEGIN, optional($.TRANSACTION)),
    commit_statement: $ => seq($.COMMIT, optional($.TRANSACTION)),
    cancel_statement: $ => seq($.CANCEL, optional($.TRANSACTION)),

    // Utility statements
    use_statement: $ => seq($.USE, choice($.NS, $.DB), $.identifier),
    info_statement: $ => seq($.INFO, $.FOR, $.ROOT),
    show_statement: $ =>
      seq($.SHOW, $.CHANGES, $.FOR, $.TABLE, $.identifier, $.SINCE, $.value),
    rebuild_index_statement: $ =>
      seq($.REBUILD, $.INDEX, $.identifier, $.ON, $.TABLE, $.identifier),

    // Supporting structures
    block: $ => seq("{", optional($.expressions), "}"),
    return_clause: $ =>
      seq(
        $.RETURN,
        choice(
          $.BEFORE,
          $.AFTER,
          $.DIFF,
          choice(
            seq(optional($.VALUE), commaSeparated($.value)),
            commaSeparated($.value),
          ),
          $.if_expression,
        ),
      ),
    param_list: $ =>
      seq(
        "(",
        optional(commaSeparated(seq($.variable_name, ":", $.type_name))),
        ")",
      ),

    // Permission clauses
    permissions_clause: $ =>
      seq(
        $.PERMISSIONS,
        choice(
          $.NONE,
          $.FULL,
          repeat1(
            seq(
              $.FOR,
              commaSeparated(choice($.SELECT, $.CREATE, $.UPDATE, $.DELETE)),
              choice($.where_clause, $.NONE, $.FULL),
            ),
          ),
        ),
      ),

    comment_clause: $ => seq($.COMMENT, $.string),

    // Conditional clauses
    if_not_exists_clause: $ => seq($.IF, $.NOT, $.EXISTS),
    if_exists_clause: $ => seq($.IF, $.EXISTS),

    keyword_overwrite: _ => make_keyword("OVERWRITE"),

    // Basic type support
    type_name: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Analyzer support
    analyzer_tokenizers: _ => choice("blank", "camel", "class", "punct"),
    analyzer_filters: $ =>
      choice(
        "ascii",
        "lowercase",
        "uppercase",
        seq("edgengram", "(", $.number, ",", $.number, ")"),
        seq("ngram", "(", $.number, ",", $.number, ")"),
        seq("snowball", "(", $.identifier, ")"),
      ),

    // Function calls
    function_call: $ =>
      choice(
        seq($.COUNT, $.argument_list_count),
        seq(
          choice(
            $.function_name,
            $.custom_function_name,
            $.RAND,
            seq($.identifier, repeat1(seq("::", $.identifier))),
          ),
          optional($.version),
          $.argument_list,
        ),
      ),

    // Record IDs
    record_id: $ =>
      prec.left(
        seq($.object_key, ":", choice($.record_id_value, $.record_id_range)),
      ),
    record_id_value: $ =>
      choice($.record_id_ident, $.number, $.array, $.object),
    record_id_ident: _ => /[a-zA-Z0-9_]+/,
    record_id_range: $ =>
      prec.right(
        3,
        choice(
          seq(
            $.record_id_value,
            ">",
            "..",
            optional(seq("=", $.record_id_value)),
          ),
          seq($.record_id_value, ">", ".."),
          seq($.record_id_value, "..", "=", $.record_id_value),
          seq($.record_id_value, "..", $.record_id_value),
          seq($.record_id_value, ".."),
          seq("..", "=", $.record_id_value),
          seq("..", $.record_id_value),
          "..",
        ),
      ),

    // Graph predicates and filters
    graph_predicate: $ =>
      seq(
        choice($.value, "?"),
        optional($.where_clause),
        optional(seq($.AS, $.identifier)),
      ),

    filter: $ =>
      seq("[", choice($.where_clause, seq($.where_clause, "?", $.value)), "]"),

    where_clause: $ => seq($.WHERE, $.value),

    // Multi-record support
    multi_record: $ => seq("|", $.identifier, ":", $.number, "|"),
  },
});

function commaSeparated(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSeparatedTrailing(rule) {
  return seq(rule, repeat(seq(",", rule)), optional(","));
}

function make_keyword(word) {
  return new RegExp(
    [...word].map(c => `[${c.toLowerCase()}${c.toUpperCase()}]`).join(""),
  );
}
