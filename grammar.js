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
    keyword_info: _ => make_keyword("INFO"),
    keyword_show: _ => make_keyword("SHOW"),
    keyword_changes: _ => make_keyword("CHANGES"),
    keyword_since: _ => make_keyword("SINCE"),
    keyword_if: _ => make_keyword("IF"),
    keyword_throw: _ => make_keyword("THROW"),
    keyword_exists: _ => make_keyword("EXISTS"),
    keyword_tokenizers: _ => make_keyword("TOKENIZERS"),
    keyword_overwrite: _ => make_keyword("OVERWRITE"),
    keyword_on: _ => make_keyword("ON"),
    keyword_let: _ => make_keyword("LET"),
    keyword_return: _ => make_keyword("RETURN"),
    keyword_else: _ => make_keyword("ELSE"),
    keyword_select: _ => make_keyword("SELECT"),
    keyword_from: _ => make_keyword("FROM"),
    keyword_only: _ => make_keyword("ONLY"),
    keyword_value: _ => make_keyword("VALUE"),
    keyword_as: _ => make_keyword("AS"),
    keyword_omit: _ => make_keyword("OMIT"),
    keyword_explain: _ => make_keyword("EXPLAIN"),
    keyword_full: _ => make_keyword("FULL"),
    keyword_parallel: _ => make_keyword("PARALLEL"),
    keyword_timeout: _ => make_keyword("TIMEOUT"),
    keyword_fetch: _ => make_keyword("FETCH"),
    keyword_limit: _ => make_keyword("LIMIT"),
    keyword_by: _ => make_keyword("BY"),
    keyword_rand: _ => make_keyword("RAND"),
    keyword_collate: _ => make_keyword("COLLATE"),
    keyword_numeric: _ => make_keyword("NUMERIC"),
    keyword_asc: _ => make_keyword("ASC"),
    keyword_desc: _ => make_keyword("DESC"),
    keyword_order: _ => make_keyword("ORDER"),
    keyword_with: _ => make_keyword("WITH"),
    keyword_index: _ => make_keyword("INDEX"),
    keyword_no_index: _ => make_keyword("NOINDEX"),
    keyword_where: _ => make_keyword("WHERE"),
    keyword_split: _ => make_keyword("SPLIT"),
    keyword_at: _ => make_keyword("AT"),
    keyword_group: _ => make_keyword("GROUP"),
    keyword_true: _ => make_keyword("TRUE"),
    keyword_false: _ => make_keyword("FALSE"),
    keyword_begin: _ => make_keyword("BEGIN"),
    keyword_cancel: _ => make_keyword("CANCEL"),
    keyword_commit: _ => make_keyword("COMMIT"),
    keyword_transaction: _ => make_keyword("TRANSACTION"),
    keyword_none: _ => make_keyword("NONE"),
    keyword_null: _ => make_keyword("NULL"),
    keyword_and: _ => make_keyword("AND"),
    keyword_or: _ => make_keyword("OR"),
    keyword_is: _ => make_keyword("IS"),
    keyword_not: _ => make_keyword("NOT"),
    keyword_contains: _ => make_keyword("contains"),
    keyword_contains_not: _ => make_keyword("CONTAINSNOT"),
    keyword_contains_all: _ => make_keyword("CONTAINSALL"),
    keyword_contains_any: _ => make_keyword("CONTAINSANY"),
    keyword_contains_none: _ => make_keyword("CONTAINSNONE"),
    keyword_inside: _ => make_keyword("INSIDE"),
    keyword_in: _ => make_keyword("IN"),
    keyword_not_inside: _ => make_keyword("NOTINSIDE"),
    keyword_all_inside: _ => make_keyword("ALLINSIDE"),
    keyword_any_inside: _ => make_keyword("ANYINSIDE"),
    keyword_none_inside: _ => make_keyword("NONEINSIDE"),
    keyword_outside: _ => make_keyword("OUTSIDE"),
    keyword_intersects: _ => make_keyword("INTERSECTS"),
    keyword_chebyshev: _ => make_keyword("CHEBYSHEV"),
    keyword_cosine: _ => make_keyword("COSINE"),
    keyword_euclidean: _ => make_keyword("EUCLIDEAN"),
    keyword_hamming: _ => make_keyword("HAMMING"),
    keyword_jaccard: _ => make_keyword("JACCARD"),
    keyword_manhattan: _ => make_keyword("MANHATTAN"),
    keyword_minkowski: _ => make_keyword("MINKOWSKI"),
    keyword_pearson: _ => make_keyword("PEARSON"),
    keyword_define: _ => make_keyword("DEFINE"),
    keyword_analyzer: _ => make_keyword("ANALYZER"),
    keyword_event: _ => make_keyword("EVENT"),
    keyword_field: _ => make_keyword("FIELD"),
    keyword_function: _ => make_keyword("FUNCTION"),
    keyword_namespace: _ => make_keyword("NAMESPACE"),
    keyword_param: _ => make_keyword("PARAM"),
    keyword_scope: _ => make_keyword("SCOPE"),
    keyword_drop: _ => make_keyword("DROP"),
    keyword_schemafull: _ => make_keyword("SCHEMAFULL"),
    keyword_schemaless: _ => make_keyword("SCHEMALESS"),
    keyword_live: _ => make_keyword("LIVE"),
    keyword_diff: _ => make_keyword("DIFF"),
    keyword_flexible: _ => make_keyword("FLEXIBLE"),
    keyword_readonly: _ => make_keyword("READONLY"),
    keyword_jwks: _ => make_keyword("JWKS"),
    keyword_eddsa: _ => make_keyword("EDDSA"),
    keyword_es256: _ => make_keyword("ES256"),
    keyword_es384: _ => make_keyword("ES384"),
    keyword_es512: _ => make_keyword("ES512"),
    keyword_ps256: _ => make_keyword("PS256"),
    keyword_ps384: _ => make_keyword("PS384"),
    keyword_ps512: _ => make_keyword("PS512"),
    keyword_rs256: _ => make_keyword("RS256"),
    keyword_rs384: _ => make_keyword("RS384"),
    keyword_rs512: _ => make_keyword("RS512"),
    keyword_bm25: _ => make_keyword("BM25"),
    keyword_doc_ids_cache: _ => make_keyword("DOC_IDS_CACHE"),
    keyword_doc_ids_order: _ => make_keyword("DOC_IDS_ORDER"),
    keyword_doc_lengths_cache: _ => make_keyword("DOC_LENGTHS_CACHE"),
    keyword_doc_lengths_order: _ => make_keyword("DOC_LENGTHS_ORDER"),
    keyword_postings_cache: _ => make_keyword("POSTINGS_CACHE"),
    keyword_postings_order: _ => make_keyword("POSTINGS_ORDER"),
    keyword_terms_cache: _ => make_keyword("TERMS_CACHE"),
    keyword_terms_order: _ => make_keyword("TERMS_ORDER"),
    keyword_highlights: _ => make_keyword("HIGHLIGHTS"),
    keyword_any: _ => make_keyword("ANY"),
    keyword_normal: _ => make_keyword("NORMAL"),
    keyword_relation: _ => make_keyword("RELATION"),
    keyword_out: _ => make_keyword("OUT"),
    keyword_to: _ => make_keyword("TO"),
    keyword_changefeed: _ => make_keyword("CHANGEFEED"),
    keyword_content: _ => make_keyword("CONTENT"),
    keyword_merge: _ => make_keyword("MERGE"),
    keyword_patch: _ => make_keyword("PATCH"),
    keyword_replace: _ => make_keyword("REPLACE"),
    keyword_before: _ => make_keyword("BEFORE"),
    keyword_after: _ => make_keyword("AFTER"),
    keyword_table: _ => make_keyword("TABLE"),
    keyword_root: _ => make_keyword("ROOT"),
    keyword_token: _ => make_keyword("TOKEN"),
    keyword_use: _ => make_keyword("USE"),
    keyword_ns: _ => make_keyword("NS"),
    keyword_db: _ => make_keyword("DB"),
    keyword_user: _ => make_keyword("USER"),
    keyword_roles: _ => make_keyword("ROLES"),
    keyword_remove: _ => make_keyword("REMOVE"),
    keyword_create: _ => make_keyword("CREATE"),
    keyword_delete: _ => make_keyword("DELETE"),
    keyword_update: _ => make_keyword("UPDATE"),
    keyword_upsert: _ => make_keyword("UPSERT"),
    keyword_insert: _ => make_keyword("INSERT"),
    keyword_into: _ => make_keyword("INTO"),
    keyword_filters: _ => make_keyword("FILTERS"),
    keyword_when: _ => make_keyword("WHEN"),
    keyword_then: _ => make_keyword("THEN"),
    keyword_type: _ => make_keyword("TYPE"),
    keyword_default: _ => make_keyword("DEFAULT"),
    keyword_assert: _ => make_keyword("ASSERT"),
    keyword_permissions: _ => make_keyword("PERMISSIONS"),
    keyword_relate: _ => make_keyword("RELATE"),
    keyword_ignore: _ => make_keyword("IGNORE"),
    keyword_values: _ => make_keyword("VALUES"),
    keyword_for: _ => make_keyword("FOR"),
    keyword_comment: _ => make_keyword("COMMENT"),
    keyword_fields: _ => make_keyword("FIELDS"),
    keyword_columns: _ => make_keyword("COLUMNS"),
    keyword_unique: _ => make_keyword("UNIQUE"),
    keyword_search: _ => make_keyword("SEARCH"),
    keyword_session: _ => make_keyword("SESSION"),
    keyword_signin: _ => make_keyword("SIGNIN"),
    keyword_signup: _ => make_keyword("SIGNUP"),
    keyword_database: _ => make_keyword("DATABASE"),
    keyword_namespace: _ => make_keyword("NAMESPACE"),
    keyword_password: _ => make_keyword("PASSWORD"),
    keyword_password_hash: _ => make_keyword("PASSHASH"),
    keyword_on_duplicate_key_update: _ =>
      make_keyword("ON DUPLICATE KEY UPDATE"),
    keyword_count: _ => make_keyword("COUNT"),
    keyword_unset: _ => make_keyword("UNSET"),
    keyword_set: _ => make_keyword("SET"),
    keyword_always: _ => make_keyword("ALWAYS"),
    keyword_alter: _ => make_keyword("ALTER"),
    keyword_break: _ => make_keyword("BREAK"),
    keyword_continue: _ => make_keyword("CONTINUE"),
    keyword_sleep: _ => make_keyword("SLEEP"),
    keyword_kill: _ => make_keyword("KILL"),
    keyword_rebuild: _ => make_keyword("REBUILD"),
    keyword_mtree: _ => make_keyword("MTREE"),
    keyword_dimension: _ => make_keyword("DIMENSION"),
    keyword_dist: _ => make_keyword("DIST"),
    keyword_efc: _ => make_keyword("EFC"),
    keyword_m: _ => make_keyword("M"),
    keyword_capacity: _ => make_keyword("CAPACITY"),
    keyword_hnsw: _ => make_keyword("HNSW"),
    keyword_owner: _ => make_keyword("OWNER"),
    keyword_editor: _ => make_keyword("EDITOR"),
    keyword_viewer: _ => make_keyword("VIEWER"),
    keyword_duration: _ => make_keyword("DURATION"),
    keyword_enforced: _ => make_keyword("ENFORCED"),
    keyword_algorithm: _ => make_keyword("ALGORITHM"),
    keyword_key: _ => make_keyword("KEY"),
    keyword_url: _ => make_keyword("URL"),
    keyword_jwt: _ => make_keyword("JWT"),
    keyword_signup: _ => make_keyword("SIGNUP"),
    keyword_issuer: _ => make_keyword("ISSUER"),
    keyword_refresh: _ => make_keyword("REFRESH"),
    keyword_record: _ => make_keyword("RECORD"),
    keyword_bearer: _ => make_keyword("BEARER"),
    keyword_authenticate: _ => make_keyword("AUTHENTICATE"),
    keyword_grant: _ => make_keyword("GRANT"),
    keyword_access: _ => make_keyword("ACCESS"),

    // Expressions
    expressions: $ =>
      seq(
        $.expression,
        repeat(seq($.semi_colon, $.expression)),
        optional($.semi_colon),
      ),

    expression: $ => choice($.primary_statement, $.subquery_statement, $.value),

    // Statements

    // Top level statements
    primary_statement: $ =>
      choice(
        $.live_select_statement,
        $.begin_statement,
        $.cancel_statement,
        $.commit_statement,
        $.use_statement,
        $.info_statement,
        $.throw_statement,
        $.break_statement,
        $.continue_statement,
        $.sleep_statement,
        $.kill_statement,
      ),

    // Statements that can be stand alone or nested
    subquery_statement: $ =>
      choice(
        $.select_statement,
        $.if_statement,
        $.let_statement,
        $.alter_statement,
        $.delete_statement,
        $.create_statement,
        $.update_statement,
        $.upsert_statement,
        $.remove_statement,
        $.return_statement,
        $.insert_statement,
        $.relate_statement,
        $.for_statement,
        $.show_statement,
        $.define_analyzer_statement,
        $.define_database,
        $.define_event_statement,
        $.define_field_statement,
        $.define_function_statement,
        $.define_index_statement,
        $.define_namespace_statement,
        $.define_param_statement,
        $.define_scope_statement,
        $.define_access_statement,
        $.define_table_statement,
        $.define_token_statement,
        $.define_user_statement,
        $.rebuild_index_statement,
      ),

    kill_statement: $ => seq($.keyword_kill, $.value),

    sleep_statement: $ => seq($.keyword_sleep, $.duration),

    break_statement: $ => seq($.keyword_break),

    continue_statement: $ => seq($.keyword_continue),

    for_statement: $ =>
      seq($.keyword_for, $.variable_name, $.keyword_in, $.value, $.block),

    return_statement: $ => $.return_clause,

    throw_statement: $ => seq($.keyword_throw, $.value),

    if_statement: $ =>
      seq(
        $.keyword_if,
        $.value,
        $.block,
        repeat($.else_if_clause),
        optional($.else_clause),
      ),

    else_if_clause: $ => seq($.keyword_else, $.keyword_if, $.value, $.block),

    else_clause: $ => seq($.keyword_else, $.block),

    let_statement: $ =>
      seq(
        $.keyword_let,
        $.variable_name,
        "=",
        choice($.value, $.subquery_statement),
      ),

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

    alter_statement: $ =>
      seq(
        $.keyword_alter,
        $.keyword_table,
        optional($.if_exists_clause),
        $.identifier,
        repeat(
          choice(
            $.keyword_drop,
            $.keyword_schemafull,
            $.keyword_schemaless,
            $.permissions_for_clause,
            $.comment_clause,
          ),
        ),
      ),

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
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        $.on_table_clause,
        $.when_then_clause,
        optional($.comment_clause),
      ),

    define_field_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_field,
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
            $.permissions_for_clause,
            $.comment_clause,
          ),
        ),
      ),

    define_function_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_function,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
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
        repeat(
          choice(
            $.unique_clause,
            $.search_analyzer_clause,
            $.mtree_dimension_clause,
            $.hnsw_dimension_clause,
          ),
        ),
      ),

    define_namespace_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_namespace,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        optional($.comment_clause),
      ),

    define_param_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_param,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.variable_name,
        $.keyword_value,
        $.value,
      ),

    define_scope_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_scope,
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

    define_access_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_access,
        optional(choice($.if_not_exists_clause, $.keyword_overwrite)),
        $.identifier,
        $.keyword_on,
        choice(
          $.keyword_root,
          $.keyword_namespace,
          $.keyword_scope,
          $.keyword_database,
        ),
        $.keyword_type,
        choice(
          seq(
            $.keyword_jwt,
            choice(
              seq($.keyword_algorithm, $.identifier, $.keyword_key, $.string),
              seq($.keyword_url, $.string),
            ),
          ),
          seq(
            $.keyword_record,
            optional(seq($.keyword_signup, "(", $.create_statement, ")")),
            optional(seq($.keyword_signin, "(", $.select_statement, ")")),
            optional(
              seq(
                $.keyword_with,
                $.keyword_jwt,
                choice(
                  seq(
                    $.keyword_algorithm,
                    $.identifier,
                    $.keyword_key,
                    $.string,
                  ),
                  seq($.keyword_url, $.string),
                ),
                optional(
                  seq(
                    $.keyword_with,
                    $.keyword_issuer,
                    $.keyword_key,
                    $.string,
                  ),
                ),
              ),
            ),
            optional(seq($.keyword_with, $.keyword_refresh)),
          ),
          seq(
            $.keyword_bearer,
            $.keyword_for,
            choice($.keyword_user, $.keyword_record),
          ),
        ),
        optional(seq($.keyword_authenticate, $.block)),
        optional($.duration_clause),
      ),

    define_table_statement: $ =>
      seq(
        $.keyword_define,
        $.keyword_table,
        optional(choice($.keyword_overwrite, $.if_not_exists_clause)),
        $.identifier,
        optional($.keyword_drop),
        optional(choice($.keyword_schemafull, $.keyword_schemaless)),
        optional($.table_type_clause),
        optional($.table_view_clause),
        optional($.changefeed_clause),
        optional($.permissions_for_clause),
        optional($.comment_clause),
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
        optional($.keyword_overwrite),
        $.identifier,
        $.keyword_on,
        choice($.keyword_root, $.keyword_namespace, $.keyword_database),
        choice(
          seq($.keyword_password, $.string),
          seq($.keyword_password_hash, $.string),
        ),
        $.keyword_roles,
        choice($.keyword_owner, $.keyword_editor, $.keyword_viewer),
        optional($.duration_clause),
      ),

    rebuild_index_statement: $ =>
      seq(
        $.keyword_rebuild,
        $.keyword_index,
        optional($.if_exists_clause),
        $.identifier,
        $.on_table_clause,
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
          $.primary_statement,
          seq(
            commaSeparated($.value),
            choice(
              $.patch_clause,
              seq(
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
                optional($.parallel_clause),
              ),
            ),
          ),
        ),
      ),

    upsert_statement: $ =>
      seq(
        $.keyword_upsert,
        optional($.keyword_only),
        commaSeparated($.value),
        optional(
          choice(
            $.content_clause,
            $.merge_clause,
            $.patch_clause,
            $.replace_clause,
            seq($.keyword_set, commaSeparated($.field_assignment)),
            seq($.keyword_unset, commaSeparated($.identifier)),
          ),
        ),
        optional($.where_clause),
        optional($.return_clause),
        optional($.timeout_clause),
        optional($.parallel_clause),
        optional($.explain_clause),
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
        commaSeparated($.value),
        optional($.where_clause),
        optional($.return_clause),
        optional($.timeout_clause),
        optional($.parallel_clause),
      ),

    show_statement: $ =>
      seq(
        $.keyword_show,
        $.keyword_changes,
        $.keyword_for,
        $.keyword_table,
        $.identifier,
        $.keyword_since,
        $.value,
        optional($.limit_clause),
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

    live_select_diff_statement: $ =>
      seq(
        $.keyword_select,
        $.keyword_diff,
        $.keyword_from,
        commaSeparated($.value),
        optional($.where_clause),
        optional($.fetch_clause),
      ),

    live_select_statement: $ =>
      seq(
        $.keyword_live,
        choice($.select_statement, $.live_select_diff_statement),
      ),

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

    duration_clause: $ =>
      seq(
        $.keyword_duration,
        commaSeparated(
          choice(
            seq($.keyword_for, $.keyword_grant, $.duration),
            seq($.keyword_for, $.keyword_token, $.duration),
            seq($.keyword_for, $.keyword_session, $.duration),
          ),
        ),
      ),

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
          $.primary_statement,
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

    type_object_property: $ => seq($.object_key, ":", $.type),

    type_object_content: $ => commaSeparated($.type_object_property),

    type_object: $ => seq("{", $.type_object_content, "}"),

    type_clause: $ => seq(optional($.keyword_flexible), $.keyword_type, $.type),

    default_clause: $ =>
      seq($.keyword_default, optional($.keyword_always), $.value),

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

    mtree_dimension_clause: $ =>
      seq(
        $.keyword_mtree,
        $.keyword_dimension,
        $.number,
        optional(seq($.keyword_type, $.type)),
        optional(seq($.keyword_dist, $.distance_values)),
        optional(seq($.keyword_capacity, $.number)),
      ),

    hnsw_dimension_clause: $ =>
      seq(
        $.keyword_hnsw,
        $.keyword_dimension,
        $.number,
        optional(seq($.keyword_type, $.type)),
        optional(seq($.keyword_dist, $.number)),
        optional(seq($.keyword_efc, $.number)),
        optional(seq($.keyword_m, $.number)),
      ),

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
                commaSeparated($.record_or_separated),
              ),
            ),
            optional(
              seq(
                choice($.keyword_out, $.keyword_to),
                commaSeparated($.record_or_separated),
              ),
            ),
            optional($.keyword_enforced),
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

    create_target: $ => choice(commaSeparated($.value), $.multi_record),

    content_clause: $ =>
      seq($.keyword_content, choice($.object, $.variable_name)),

    set_clause: $ => seq($.keyword_set, commaSeparated($.field_assignment)),

    unset_clause: $ => seq($.keyword_unset, commaSeparated($.identifier)),

    return_clause: $ =>
      seq(
        $.keyword_return,
        choice(
          $.keyword_before,
          $.keyword_after,
          $.keyword_diff,
          choice(
            seq(optional($.keyword_value), commaSeparated($.value)),
            commaSeparated($.value),
          ),
          $.if_statement,
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

    replace_clause: $ => seq($.keyword_replace, $.object),

    field_assignment: $ => seq($.identifier, $.assignment_operator, $.value),

    // Value-related rules
    value: $ =>
      choice(
        $.base_value,
        $.cast_expression,
        $.binary_expression,
        $.path,
        $.function_call,
        $.negated_expression,
        $.range,
      ),

    multi_record: $ => seq("|", $.identifier, ":", $.int, "|"),

    function_call: $ =>
      choice(
        seq($.keyword_count, $.argument_list_count),
        seq(
          choice(
            $.function_name,
            $.custom_function_name,
            $.keyword_rand,
            seq($.identifier, repeat1(seq("::", $.identifier))),
          ),
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

    cast_expression: $ => prec.left(seq("<", $.type_name, ">", $.value)),

    binary_expression: $ => prec.left(seq($.value, $.operator, $.value)),

    negated_expression: $ =>
      seq("!", choice($.variable_name, $.function_call, $.record_id, $.path)),

    path: $ =>
      choice(
        seq($.base_value, repeat1($.path_element)),
        seq($.function_call, repeat1($.path_element)),
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
        choice(
          prec(1, seq($.identifier, $.argument_list)),
          seq($.function_name, $.argument_list),
          $.identifier,
          "*",
        ),
      ),

    version: $ => seq("<", $.version_number, ">"),

    argument_list: $ => seq("(", optional(commaSeparated($.value)), ")"),

    argument_list_count: $ =>
      seq(
        "(",
        optional(choice(commaSeparated($.value), $.primary_statement)),
        ")",
      ),

    type_name: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    literal_value: $ => choice($.int, $.string),

    type_or_separated: $ =>
      prec(1, seq($.type_name, repeat(seq("|", $.type_name)))),
    record_or_separated: $ =>
      prec(2, seq($.identifier, repeat(seq("|", $.identifier)))),

    type: $ =>
      choice(
        $.union_type,
        $.parameterized_type,
        $.composite_type,
        $.type_name,
        $.type_object,
      ),

    union_type: $ =>
      prec.right(
        1,
        seq(
          choice($.type_name, $.literal_value),
          repeat1(seq("|", choice($.type_name, $.literal_value))),
        ),
      ),

    composite_type: $ => seq("[", commaSeparated($.type), "]"),

    parameterized_type: $ =>
      seq(
        $.type_name,
        "<",
        commaSeparated(choice($.type, $.literal_value)),
        ">",
      ),

    type_object: $ => seq("{", commaSeparated($.type_object_property), "}"),

    type_object_property: $ => seq($.object_key, ":", $.type),

    analyzer_tokenizers: _ => choice("blank", "camel", "class", "punct"),

    distance_values: $ =>
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
      prec.right(
        3,
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
    range: $ => seq($.int, "..", optional("="), $.int),

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
        seq("<|", $.int, optional(seq(",", $.distance_values)), "|>"),
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

function make_keyword(word) {
  return new RegExp(
    [...word].map(c => `[${c.toLowerCase()}${c.toUpperCase()}]`).join(""),
  );
}
