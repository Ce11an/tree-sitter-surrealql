module.exports = grammar({
  name: "surrealql",

  extras: $ => [$.comment, /\s\n/, /\s/],

  rules: {
    source_file: $ => choice($.expressions, $.where_clause),

    // Tokens
    comment: _ =>
      token(
        choice(
          seq("--", /.*/),
          seq("/*", /.*/, repeat(seq("\n", /.*/)), "*/"),
          seq("#", /.*/),
          seq("//", /.*/),
          seq("-------- Query", /.*/),
          seq("-------- Result", /.*/),
        ),
      ),
    semi_colon: _ => token(";"),
    keyword_info: _ => token("INFO"),
    keyword_if: _ => token("IF"),
    keyword_throw: _ => token("THROW"),
    keyword_exists: _ => token("EXISTS"),
    keyword_tokenizers: _ => token("TOKENIZERS"),
    keyword_overwrite: _ => token("OVERWRITE"),
    keyword_on: _ => token("ON"),
    keyword_let: _ => token("LET"),
    keyword_return: _ => token("RETURN"),
    keyword_else: _ => token("ELSE"),
    keyword_select: _ => token("SELECT"),
    keyword_from: _ => token("FROM"),
    keyword_only: _ => token("ONLY"),
    keyword_value: _ => token("VALUE"),
    keyword_as: _ => token("AS"),
    keyword_omit: _ => token("OMIT"),
    keyword_explain: _ => token("EXPLAIN"),
    keyword_full: _ => token("FULL"),
    keyword_parallel: _ => token("PARALLEL"),
    keyword_timeout: _ => token("TIMEOUT"),
    keyword_fetch: _ => token("FETCH"),
    keyword_limit: _ => token("LIMIT"),
    keyword_by: _ => token("BY"),
    keyword_rand: _ => token("RAND"),
    keyword_collate: _ => token("COLLATE"),
    keyword_numeric: _ => token("NUMERIC"),
    keyword_asc: _ => token("ASC"),
    keyword_desc: _ => token("DESC"),
    keyword_order: _ => token("ORDER"),
    keyword_with: _ => token("WITH"),
    keyword_index: _ => token("INDEX"),
    keyword_no_index: _ => token("NOINDEX"),
    keyword_where: _ => token("WHERE"),
    keyword_split: _ => token("SPLIT"),
    keyword_at: _ => token("AT"),
    keyword_group: _ => token("GROUP"),
    keyword_true: _ => token("TRUE"),
    keyword_false: _ => token("FALSE"),
    keyword_begin: _ => token("BEGIN"),
    keyword_cancel: _ => token("CANCEL"),
    keyword_commit: _ => token("COMMIT"),
    keyword_transaction: _ => token("TRANSACTION"),
    keyword_none: _ => token("NONE"),
    keyword_null: _ => token("NULL"),
    keyword_and: _ => token("AND"),
    keyword_or: _ => token("OR"),
    keyword_is: _ => token("IS"),
    keyword_not: _ => token("NOT"),
    keyword_contains: _ => token("contains"),
    keyword_contains_not: _ => token("CONTAINSNOT"),
    keyword_contains_all: _ => token("CONTAINSALL"),
    keyword_contains_any: _ => token("CONTAINSANY"),
    keyword_contains_none: _ => token("CONTAINSNONE"),
    keyword_inside: _ => token("INSIDE"),
    keyword_in: _ => token("IN"),
    keyword_not_inside: _ => token("NOTINSIDE"),
    keyword_all_inside: _ => token("ALLINSIDE"),
    keyword_any_inside: _ => token("ANYINSIDE"),
    keyword_none_inside: _ => token("NONEINSIDE"),
    keyword_outside: _ => token("OUTSIDE"),
    keyword_intersects: _ => token("INTERSECTS"),
    keyword_chebyshev: _ => token("CHEBYSHEV"),
    keyword_cosine: _ => token("COSINE"),
    keyword_euclidean: _ => token("EUCLIDEAN"),
    keyword_hamming: _ => token("HAMMING"),
    keyword_jaccard: _ => token("JACCARD"),
    keyword_manhattan: _ => token("MANHATTAN"),
    keyword_minkowski: _ => token("MINKOWSKI"),
    keyword_pearson: _ => token("PEARSON"),
    keyword_define: _ => token("DEFINE"),
    keyword_analyzer: _ => token("ANALYZER"),
    keyword_event: _ => token("EVENT"),
    keyword_field: _ => token("FIELD"),
    keyword_function: _ => token("FUNCTION"),
    keyword_namespace: _ => token("NAMESPACE"),
    keyword_param: _ => token("PARAM"),
    keyword_scope: _ => token("SCOPE"),
    keyword_drop: _ => token("DROP"),
    keyword_schemafull: _ => token("SCHEMAFULL"),
    keyword_schemaless: _ => token("SCHEMALESS"),
    keyword_live: _ => token("LIVE"),
    keyword_diff: _ => token("DIFF"),
    keyword_flexible: _ => token("FLEXIBLE"),
    keyword_readonly: _ => token("READONLY"),
    keyword_jwks: _ => token("JWKS"),
    keyword_eddsa: _ => token("EDDSA"),
    keyword_es256: _ => token("ES256"),
    keyword_es384: _ => token("ES384"),
    keyword_es512: _ => token("ES512"),
    keyword_ps256: _ => token("PS256"),
    keyword_ps384: _ => token("PS384"),
    keyword_ps512: _ => token("PS512"),
    keyword_rs256: _ => token("RS256"),
    keyword_rs384: _ => token("RS384"),
    keyword_rs512: _ => token("RS512"),
    keyword_bm25: _ => token("BM25"),
    keyword_doc_ids_cache: _ => token("DOC_IDS_CACHE"),
    keyword_doc_ids_order: _ => token("DOC_IDS_ORDER"),
    keyword_doc_lengths_cache: _ => token("DOC_LENGTHS_CACHE"),
    keyword_doc_lengths_order: _ => token("DOC_LENGTHS_ORDER"),
    keyword_postings_cache: _ => token("POSTINGS_CACHE"),
    keyword_postings_order: _ => token("POSTINGS_ORDER"),
    keyword_terms_cache: _ => token("TERMS_CACHE"),
    keyword_terms_order: _ => token("TERMS_ORDER"),
    keyword_highlights: _ => token("HIGHLIGHTS"),
    keyword_any: _ => token("ANY"),
    keyword_normal: _ => token("NORMAL"),
    keyword_relation: _ => token("RELATION"),
    keyword_out: _ => token("OUT"),
    keyword_to: _ => token("TO"),
    keyword_changefeed: _ => token("CHANGEFEED"),
    keyword_content: _ => token("CONTENT"),
    keyword_merge: _ => token("MERGE"),
    keyword_patch: _ => token("PATCH"),
    keyword_before: _ => token("BEFORE"),
    keyword_after: _ => token("AFTER"),
    keyword_table: _ => token("TABLE"),
    keyword_root: _ => token("ROOT"),
    keyword_token: _ => token("TOKEN"),
    keyword_use: _ => token("USE"),
    keyword_ns: _ => token("NS"),
    keyword_db: _ => token("DB"),
    keyword_user: _ => token("USER"),
    keyword_roles: _ => token("ROLES"),
    keyword_remove: _ => token("REMOVE"),
    keyword_create: _ => token("CREATE"),
    keyword_delete: _ => token("DELETE"),
    keyword_update: _ => token("UPDATE"),
    keyword_insert: _ => token("INSERT"),
    keyword_into: _ => token("INTO"),
    keyword_filters: _ => token("FILTERS"),
    keyword_when: _ => token("WHEN"),
    keyword_then: _ => token("THEN"),
    keyword_type: _ => token("TYPE"),
    keyword_default: _ => token("DEFAULT"),
    keyword_assert: _ => token("ASSERT"),
    keyword_permissions: _ => token("PERMISSIONS"),
    keyword_relate: _ => token("RELATE"),
    keyword_ignore: _ => token("IGNORE"),
    keyword_values: _ => token("VALUES"),
    keyword_for: _ => token("FOR"),
    keyword_comment: _ => token("COMMENT"),
    keyword_fields: _ => token("FIELDS"),
    keyword_columns: _ => token("COLUMNS"),
    keyword_unique: _ => token("UNIQUE"),
    keyword_search: _ => token("SEARCH"),
    keyword_session: _ => token("SESSION"),
    keyword_signin: _ => token("SIGNIN"),
    keyword_signup: _ => token("SIGNUP"),
    keyword_database: _ => token("DATABASE"),
    keyword_namespace: _ => token("NAMESPACE"),
    keyword_password: _ => token("PASSWORD"),
    keyword_password_hash: _ => token("PASSHASH"),
    keyword_on_duplicate_key_update: _ => token("ON DUPLICATE KEY UPDATE"),
    keyword_count: _ => token("COUNT"),
    keyword_set: _ => token("SET"),
    keyword_unset: _ => token("UNSET"),

    // Expressions
    expressions: $ =>
      seq(
        $.expression,
        repeat(seq($.semi_colon, $.expression)),
        optional($.semi_colon),
      ),

    expression: $ => choice($.statement, $.value),

    // Statements
    statement: $ =>
      choice(
        $.select_statement,
        $.live_select_statement,
        $.begin_statement,
        $.cancel_statement,
        $.commit_statement,
        $.define_analyzer_statement,
        $.define_database,
        $.define_event_statement,
        $.define_field_statement,
        $.define_function_statement,
        $.define_index_statement,
        $.define_namespace_statement,
        $.define_param_statement,
        $.define_scope_statement,
        $.define_table_statement,
        $.define_token_statement,
        $.define_user_statement,
        $.remove_statement,
        $.create_statement,
        $.update_statement,
        $.insert_statement,
        $.relate_statement,
        $.delete_statement,
        $.use_statement,
        $.info_statement,
        $.let_statement,
        $.if_statement,
        $.throw_statement,
        $.return_statement,
      ),

    return_statement: $ => $.return_clause,

    throw_statement: $ => seq(
      $.keyword_throw,
      $.value
    ),

    if_statement: $ => seq(
      $.keyword_if,
      $.value,
      $.block,
      repeat($.else_if_clause),
      optional($.else_clause),
    ),

    else_if_clause: $ => seq(
      $.keyword_else,
      $.keyword_if,
      $.value,
      $.block
    ),

    else_clause: $ => seq(
      $.keyword_else,
      $.block
    ),

    let_statement: $ => seq($.keyword_let, $.variable_name, "=", choice($.value, $.if_statement)),

    info_statement: $ => seq($.keyword_info, $.keyword_for, $.info_target),

    info_target: $ =>
      choice(
        $.root_info,
        $.namespace_info,
        $.database_info,
        $.table_info,
        $.user_info,
      ),

    use_statement: $ =>
      seq(
        $.keyword_use,
        choice($.ns_clause, $.db_clause, seq($.ns_clause, $.db_clause)),
      ),

    begin_statement: $ => seq($.keyword_begin, optional($.keyword_transaction)),

    cancel_statement: $ =>
      seq($.keyword_cancel, optional($.keyword_transaction)),

    commit_statement: $ =>
      seq($.keyword_commit, optional($.keyword_transaction)),

    define_analyzer_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_analyzer,
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

    define_database: $ =>
      seq(
        $.keyword_define,
        $.keyword_database,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        optional($.comment_clause),
      ),

    define_event_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_event,
        $.identifier,
        $.on_table_clause,
        $.when_then_clause,
        optional($.comment_clause),
      ),

    define_field_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_field,
        optional($.if_not_exists_clause),
        $.identifier,
        $.on_table_clause,
        repeat(
          choice(
            $.type_clause,
            $.default_clause,
            $.readonly_clause,
            $.value_clause,
            $.assert_clause,
            $.permissions_for_clause,
            $.comment_clause,
          ),
        ),
      ),

    define_function_statement: $ =>
      seq(
        $.keyword_define,
        $.define_function,
        optional($.if_not_exists_clause),
        $.custom_function_name,
        $.param_list,
        $.block,
        repeat(choice($.permissions_basic_clause, $.comment_clause)),
      ),

    define_function: $ =>
      seq(
        $.keyword_define,
        $.keyword_function,
        optional($.if_not_exists_clause),
        $.custom_function_name,
        $.param_list,
        $.block,
        repeat(choice($.permissions_basic_clause, $.comment_clause)),
      ),

    define_index_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_index,
        optional($.if_not_exists_clause),
        $.identifier,
        $.on_table_clause,
        $.fields_columns_clause,
        repeat(choice($.unique_clause, $.search_analyzer_clause)),
      ),

    define_namespace_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_namespace,
        $.identifier,
        optional($.comment_clause),
      ),

    define_param_statement: $ =>
      seq(
        $.keyword_define,
        $.define_param,
        optional($.if_not_exists_clause),
        $.variable_name,
        $.keyword_value,
        $.value,
      ),

    define_param: $ =>
      seq(
        $.keyword_define,
        $.keyword_param,
        optional($.if_not_exists_clause),
        $.variable_name,
        $.keyword_value,
        $.value,
      ),

    define_scope_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_scope,
        optional($.if_not_exists_clause),
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

    define_table_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_table,
        optional($.if_not_exists_clause),
        $.identifier,
        repeat(
          choice(
            $.keyword_drop,
            $.keyword_schemafull,
            $.keyword_schemaless,
            $.table_type_clause,
            $.table_view_clause,
            $.changefeed_clause,
            $.permissions_for_clause,
            $.comment_clause,
          ),
        ),
      ),

    define_token_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_token,
        optional($.if_not_exists_clause),
        $.identifier,
        $.keyword_on,
        choice($.keyword_root, $.keyword_namespace, $.keyword_scope),
        $.token_type_clause,
        $.keyword_value,
        $.string,
      ),

    define_user_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_user,
        optional($.if_not_exists_clause),
        $.identifier,
        $.keyword_on,
        choice($.keyword_root, $.keyword_namespace, $.keyword_database),
        choice(
          seq($.keyword_password, $.string),
          seq($.keyword_password_hash, $.string),
        ),
        $.keyword_roles,
        commaSeparated($.identifier),
      ),

    remove_statement: $ =>
      seq(
        $.keyword_remove,
        choice(
          seq($.keyword_namespace, optional($.if_exists_clause), $.identifier),
          seq($.keyword_database, optional($.if_exists_clause), $.identifier),
          seq(
            $.keyword_user,
            optional($.if_exists_clause),
            $.identifier,
            $.keyword_on,
            choice($.keyword_root, $.keyword_namespace, $.keyword_database),
          ),
          seq(
            $.keyword_token,
            optional($.if_exists_clause),
            $.identifier,
            $.keyword_on,
            choice($.keyword_root, $.keyword_namespace, $.keyword_scope),
          ),
          seq(
            $.keyword_event,
            optional($.if_exists_clause),
            $.identifier,
            optional(seq($.keyword_on, $.keyword_table)),
            $.identifier,
          ),
          seq(
            $.keyword_field,
            optional($.if_exists_clause),
            $.identifier,
            optional(seq($.keyword_on, $.keyword_table)),
            $.identifier,
          ),
          seq(
            $.keyword_index,
            optional($.if_exists_clause),
            $.identifier,
            optional(seq($.keyword_on, $.keyword_table)),
            $.identifier,
          ),
          seq($.keyword_analyzer, optional($.if_exists_clause), $.identifier),
          seq(
            $.keyword_function,
            optional($.if_exists_clause),
            $.custom_function_name,
          ),
          seq($.keyword_param, optional($.if_exists_clause), $.variable_name),
          seq($.keyword_scope, optional($.if_exists_clause), $.identifier),
          seq($.keyword_table, optional($.if_exists_clause), $.identifier),
        ),
      ),

    create_statement: $ =>
      seq(
        $.keyword_create,
        optional($.keyword_only),
        $.create_target,
        optional(choice($.content_clause, $.set_clause)),
        optional($.return_clause),
        optional($.timeout_clause),
      ),

    update_statement: $ =>
      seq(
        $.keyword_update,
        optional($.keyword_only),
        choice(
          $.statement,
          seq(
            commaSeparated($.value),
            optional(
              choice(
                $.content_clause,
                $.merge_clause,
                $.patch_clause,
                $.set_clause,
              ),
            ),
            optional($.where_clause),
            optional($.return_clause),
            optional($.timeout_clause),
            optional($.parallel_clause),
          ),
        ),
      ),

    relate_statement: $ =>
      seq(
        $.keyword_relate,
        optional($.keyword_only),
        $.relate_subject,
        "->",
        $.relate_subject,
        "->",
        $.relate_subject,
        optional(choice($.content_clause, $.set_clause)),
        optional($.return_clause),
        optional($.timeout_clause),
        optional($.parallel_clause),
      ),

    delete_statement: $ =>
      seq(
        $.keyword_delete,
        optional($.keyword_only),
        choice(
          $.statement,
          seq(
            commaSeparated($.value),
            optional($.where_clause),
            optional($.return_clause),
            optional($.timeout_clause),
            optional($.parallel_clause),
          ),
        ),
      ),

    insert_statement: $ =>
      seq(
        $.keyword_insert,
        optional($.keyword_ignore),
        $.keyword_into,
        $.identifier,
        choice(
          $.object,
          seq("[", commaSeparated($.object), "]"),
          seq(
            "(",
            commaSeparated($.identifier),
            ")",
            $.keyword_values,
            commaSeparated(seq("(", commaSeparated($.value), ")")),
            $.keyword_on_duplicate_key_update,
            commaSeparated($.field_assignment),
          ),
        ),
      ),

    select_statement: $ =>
      seq($.select_clause, optional($.omit_clause), $.from_clause),

    live_select_statement: $ => seq($.keyword_live, $.select_statement),

    // Clauses

    root_info: $ => $.keyword_root,

    namespace_info: $ => choice($.keyword_ns, $.keyword_namespace),

    database_info: $ => choice($.keyword_db, $.keyword_database),

    table_info: $ => seq($.keyword_table, $.identifier),

    user_info: $ =>
      seq($.keyword_user, $.identifier, optional($.on_level_clause)),

    on_level_clause: $ => seq($.keyword_on, $.level_clause),

    level_clause: $ =>
      choice($.keyword_root, $.keyword_namespace, $.keyword_database),

    ns_clause: $ => seq($.keyword_ns, $.identifier),
    db_clause: $ => seq($.keyword_db, $.identifier),

    select_clause: $ =>
      seq(
        $.keyword_select,
        choice(
          seq($.keyword_value, $.predicate),
          commaSeparated($.inclusive_predicate),
        ),
      ),

    from_clause: $ =>
      seq(
        $.keyword_from,
        optional($.keyword_only),
        choice(
          $.statement,
          seq(
            commaSeparated($.value),
            optional($.with_clause),
            optional($.where_clause),
            optional($.split_clause),
            optional($.group_clause),
            optional($.order_clause),
            optional($.limit_clause),
            optional($.fetch_clause),
            optional($.timeout_clause),
            optional($.parallel_clause),
            optional($.explain_clause),
          ),
        ),
      ),

    omit_clause: $ => seq($.keyword_omit, $.value),

    with_clause: $ =>
      seq(
        $.keyword_with,
        choice(
          $.keyword_no_index,
          seq($.keyword_index, commaSeparated($.value)),
        ),
      ),

    where_clause: $ => seq($.keyword_where, $.value),

    split_clause: $ =>
      seq(
        $.keyword_split,
        optional($.keyword_at),
        commaSeparated($.identifier),
      ),

    group_clause: $ =>
      seq(
        $.keyword_group,
        optional($.keyword_by),
        commaSeparated($.identifier),
      ),

    order_clause: $ =>
      seq(
        $.keyword_order,
        optional($.keyword_by),
        commaSeparated($.order_criteria),
      ),

    order_criteria: $ =>
      seq(
        $.value,
        optional(choice($.keyword_rand, $.keyword_collate, $.keyword_numeric)),
        optional(choice($.keyword_asc, $.keyword_desc)),
      ),

    limit_clause: $ => seq($.keyword_limit, $.number),
    fetch_clause: $ => seq($.keyword_fetch, commaSeparated($.identifier)),
    timeout_clause: $ => seq($.keyword_timeout, $.duration),
    parallel_clause: $ => $.keyword_parallel,
    explain_clause: $ => seq($.keyword_explain, optional($.keyword_full)),

    filter: $ =>
      seq(
        "[",
        choice($.where_clause, $.value, seq($.where_clause, "?", $.value)),
        "]",
      ),

    tokenizers_clause: $ =>
      seq($.keyword_tokenizers, commaSeparated($.analyzer_tokenizers)),

    filters_clause: $ =>
      seq($.keyword_filters, commaSeparated($.analyzer_filters)),

    function_clause: $ => seq($.keyword_function, $.custom_function_name),

    on_table_clause: $ =>
      seq($.keyword_on, optional($.keyword_table), $.identifier),

    when_then_clause: $ =>
      seq(
        optional(seq($.keyword_when, $.value)),
        optional($.keyword_then),
        commaSeparated(choice($.sub_query, $.block)),
      ),

    type_clause: $ => seq(optional($.keyword_flexible), $.keyword_type, $.type),

    default_clause: $ => seq($.keyword_default, $.value),

    readonly_clause: $ => $.keyword_readonly,

    value_clause: $ => seq($.keyword_value, $.value),

    assert_clause: $ => seq($.keyword_assert, $.value),

    permissions_for_clause: $ =>
      seq(
        $.keyword_permissions,
        choice(
          $.keyword_none,
          $.keyword_full,
          repeat1(
            seq(
              $.keyword_for,
              commaSeparated(
                choice(
                  $.keyword_select,
                  $.keyword_create,
                  $.keyword_update,
                  $.keyword_delete,
                ),
              ),
              choice($.where_clause, $.keyword_none, $.keyword_full),
            ),
          ),
        ),
      ),

    permissions_basic_clause: $ =>
      seq(
        $.keyword_permissions,
        choice($.keyword_none, $.keyword_full, $.where_clause),
      ),

    comment_clause: $ => seq($.keyword_comment, $.string),

    param_list: $ =>
      seq(
        "(",
        optional(commaSeparated(seq($.variable_name, ":", $.type))),
        ")",
      ),

    block: $ => seq("{", optional($.expressions), "}"),

    fields_columns_clause: $ =>
      seq(
        choice($.keyword_fields, $.keyword_columns),
        commaSeparated($.identifier),
      ),

    unique_clause: $ => $.keyword_unique,

    search_analyzer_clause: $ =>
      seq(
        $.keyword_search,
        $.keyword_analyzer,
        $.identifier,
        repeat(
          choice(
            $.bm25_clause,
            $.doc_ids_order_clause,
            $.doc_lengths_order_clause,
            $.postings_order_clause,
            $.terms_order_clause,
            $.doc_ids_cache_clause,
            $.doc_lengths_cache_clause,
            $.postings_cache_clause,
            $.terms_cache_clause,
            $.keyword_highlights,
          ),
        ),
      ),

    bm25_clause: $ =>
      seq($.keyword_bm25, optional(seq("(", $.float, ",", $.float, ")"))),

    doc_ids_cache_clause: $ => seq($.keyword_doc_ids_cache, $.int),
    doc_ids_order_clause: $ => seq($.keyword_doc_ids_order, $.int),
    doc_lengths_cache_clause: $ => seq($.keyword_doc_lengths_cache, $.int),
    doc_lengths_order_clause: $ => seq($.keyword_doc_lengths_order, $.int),
    postings_cache_clause: $ => seq($.keyword_postings_cache, $.int),
    postings_order_clause: $ => seq($.keyword_postings_order, $.int),
    terms_cache_clause: $ => seq($.keyword_terms_cache, $.int),
    terms_order_clause: $ => seq($.keyword_terms_order, $.int),

    session_clause: $ => seq($.keyword_session, $.duration),

    signin_clause: $ => seq($.keyword_signin, choice($.sub_query, $.block)),

    signup_clause: $ => seq($.keyword_signup, choice($.sub_query, $.block)),

    table_type_clause: $ =>
      seq(
        $.keyword_type,
        choice(
          $.keyword_any,
          $.keyword_normal,
          seq(
            $.keyword_relation,
            optional(
              seq(
                choice($.keyword_in, $.keyword_from),
                commaSeparated($.identifier),
              ),
            ),
            optional(
              seq(
                choice($.keyword_out, $.keyword_to),
                commaSeparated($.identifier),
              ),
            ),
          ),
        ),
      ),

    table_view_clause: $ =>
      seq(
        $.keyword_as,
        $.keyword_select,
        commaSeparated($.inclusive_predicate),
        $.keyword_from,
        commaSeparated($.value),
        optional($.where_clause),
        optional($.group_clause),
      ),

    changefeed_clause: $ => seq($.keyword_changefeed, $.duration),

    token_type_clause: $ =>
      seq(
        $.keyword_type,
        choice(
          $.keyword_jwks,
          $.keyword_eddsa,
          $.keyword_es256,
          $.keyword_es384,
          $.keyword_es512,
          $.keyword_ps256,
          $.keyword_ps384,
          $.keyword_ps512,
          $.keyword_rs256,
          $.keyword_rs384,
          $.keyword_rs512,
        ),
      ),

    if_not_exists_clause: $ =>
      seq($.keyword_if, $.keyword_not, $.keyword_exists),
    if_exists_clause: $ => seq($.keyword_if, $.keyword_exists),

    create_target: $ =>
      choice(commaSeparated($.identifier), $.variable_name, $.function_call, $.record_id),

    content_clause: $ => seq($.keyword_content, $.object),

    set_clause: $ => seq($.keyword_set, commaSeparated($.field_assignment)),

    return_clause: $ =>
      seq(
        $.keyword_return,
        choice(
          $.keyword_before,
          $.keyword_after,
          $.keyword_diff,
          commaSeparated($.value),
          $.if_statement
        ),
      ),

    relate_subject: $ =>
      choice(
        $.array,
        $.identifier,
        $.function_call,
        $.variable_name,
        $.record_id,
      ),

    merge_clause: $ => seq($.keyword_merge, $.object),

    patch_clause: $ => seq($.keyword_patch, $.array),

    field_assignment: $ => seq($.identifier, $.assignment_operator, $.value),

    // Value-related rules
    value: $ =>
      choice($.base_value, $.binary_expression, $.path, $.function_call, $.negated_expression),

    function_call: $ =>
      choice(
        seq($.keyword_count, $.argument_list_count),
        seq(
          choice($.function_name, $.custom_function_name, $.keyword_rand, seq($.identifier, repeat1(seq('::', $.identifier)))),
          optional($.version),
          $.argument_list,
        ),
      ),

    base_value: $ =>
      choice(
        $.string,
        $.prefixed_string,
        $.number,
        $.keyword_true,
        $.keyword_false,
        $.keyword_none,
        $.keyword_null,
        $.variable_name,
        $.identifier,
        $.array,
        $.record_id,
        $.sub_query,
        $.object,
        $.duration,
        $.point,
      ),

    binary_expression: $ => prec.left(seq($.value, $.operator, $.value)),

    negated_expression: $ => seq(
      '!',
      $.function_call,
    ),

    path: $ =>
      choice(
        seq($.base_value, repeat1($.path_element)),
        seq($.graph_path, repeat($.path_element)),
      ),

    path_element: $ => choice($.graph_path, $.subscript, $.filter),

    graph_path: $ =>
      seq(
        choice("<-", "->", "<->"),
        choice(
          $.identifier,
          "?",
          seq("(", commaSeparated($.graph_predicate), ")"),
        ),
      ),

    predicate: $ => choice($.value, seq($.value, $.keyword_as, $.identifier)),

    inclusive_predicate: $ => choice("*", $.predicate),

    graph_predicate: $ =>
      seq(
        choice($.value, "?"),
        optional($.where_clause),
        optional(seq($.keyword_as, $.identifier)),
      ),

    subscript: $ =>
      seq(
        ".",
        choice($.identifier, seq($.function_name, $.argument_list), "*"),
      ),

    version: $ => seq("<", $.version_number, ">"),

    argument_list: $ => seq("(", optional(commaSeparated($.value)), ")"),

    argument_list_count: $ =>
      seq("(", optional(choice(commaSeparated($.value), $.statement)), ")"),

    type: $ => choice($.type_name, $.parameterized_type),

    type_name: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    parameterized_type: $ => seq($.type, "<", choice($.type, $.int), ">"),

    analyzer_tokenizers: _ => choice("blank", "camel", "class", "punct"),

    analyzer_filters: $ =>
      choice(
        "ascii",
        "lowercase",
        "uppercase",
        seq("edgengram", "(", $.int, ",", $.int, ")"),
        seq("ngram", "(", $.int, ",", $.int, ")"),
        seq("snowball", "(", $.identifier, ")"),
      ),

    // Lexical tokens
    string: _ => /'[^'\\]*(?:\\.[^'\\]*)*'|"[^"\\]*(?:\\.[^"\\]*)*"/,
    prefixed_string: _ =>
      /[ruds](?:'[^'\\]*(?:\\.[^'\\]*)*'|"[^"\\]*(?:\\.[^'\\]*)*")/,
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
    array: $ => seq("[", optional(commaSeparated($.value)), "]"),
    object: $ => seq("{", optional($.object_content), "}"),
    object_content: $ => commaSeparated($.object_property),
    object_property: $ => seq(choice($.object_key, $.string), ":", $.value),
    object_key: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    record_id: $ =>
      prec.left(
        seq($.object_key, ":", choice($.record_id_value, $.record_id_range)),
      ),
    record_id_value: $ => choice($.record_id_ident, $.int, $.array, $.object),
    record_id_ident: _ => /[a-zA-Z0-9_]+/,
    record_id_range: $ =>
      prec.left(
        seq(
          optional(seq($.record_id_value, optional(">"))),
          "..",
          optional(seq(optional("="), $.record_id_value)),
        ),
      ),
    sub_query: $ => seq("(", $.expression, ")"),
    duration: $ => repeat1($.duration_part),
    duration_part: _ => /[0-9]+\s*(ns|us|µs|ms|s|m|h|d|w|y)/,
    point: $ => seq("(", $.decimal, ",", $.decimal, ")"),

    operator: $ =>
      choice(
        $.binary_operator,
        "-",
        "=",
        ">",
        "<",
        "%",
        $.keyword_and,
        $.keyword_or,
        $.keyword_is,
        seq($.keyword_is, $.keyword_not),
        $.keyword_contains,
        $.keyword_contains_not,
        $.keyword_contains_all,
        $.keyword_contains_any,
        $.keyword_contains_none,
        $.keyword_inside,
        $.keyword_in,
        $.keyword_not_inside,
        seq($.keyword_not, $.keyword_in),
        $.keyword_all_inside,
        $.keyword_any_inside,
        $.keyword_none_inside,
        $.keyword_outside,
        $.keyword_intersects,
        seq("@", $.int, "@"),
        seq(
          "<|",
          $.int,
          optional(
            seq(
              ",",
              choice(
                $.int,
                $.keyword_chebyshev,
                $.keyword_cosine,
                $.keyword_euclidean,
                $.keyword_hamming,
                $.keyword_jaccard,
                $.keyword_manhattan,
                seq($.keyword_minkowski, $.number),
                $.keyword_pearson,
              ),
            ),
          ),
          "|>",
        ),
      ),

    binary_operator: _ =>
      choice(
        "&&",
        "||",
        "??",
        "?:",
        "!=",
        "==",
        "?=",
        "*=",
        "~",
        "!~",
        "*~",
        "<=",
        ">=",
        "+",
        "+=",
        "-=",
        "*",
        "×",
        "/",
        "÷",
        "**",
        ...["∋", "∌", "⊇", "⊃", "⊅", "∈", "∉", "⊆", "⊂", "⊄"],
        "@@",
      ),

    assignment_operator: _ => choice("=", "+=", "-="),
  },
});

function commaSeparated(rule) {
  return seq(rule, repeat(seq(",", rule)));
}
