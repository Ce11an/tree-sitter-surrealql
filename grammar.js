module.exports = grammar({
    name: 'surrealql',

    extras: $ => [
        $.comment,
        /[\s\uFEFF\u2060\u200B\u00A0]/
    ],

    rules: {
        source_file: $ => repeat($._statement),

        comment: _ => token(
            choice(
                seq("--", /.*/),
                seq("/*", /.*/, repeat(seq("\n", /.*/)), "*/"),
                seq("#", /.*/),
                seq("//", /.*/),
            )
        ),

        _statement: $ => seq(
            choice(
                $.select_statement,
            ),
            optional($.semi_colon)
        ),

        keyword_select: _ => token('SELECT'),
        keyword_from: _ => token('FROM'),
        keyword_only: _ => token('ONLY'),
        keyword_value: _ => token('VALUE'),
        keyword_as: _ => token('AS'),
        keyword_omit: _ => token('OMIT'),
        keyword_explain: _ => token('EXPLAIN'),
        keyword_full: _ => token('FULL'),
        keyword_parallel: _ => token('PARALLEL'),
        keyword_timeout: _ => token('TIMEOUT'),
        keyword_fetch: _ => token('FETCH'),
        keyword_start_at: _ => token('START AT'),
        keyword_limit: _ => token('LIMIT'),
        keyword_by: _ => token('BY'),
        keyword_rand: _ => token('RAND()'),
        keyword_collate: _ => token('COLLATE'),
        keyword_numeric: _ => token('NUMERIC'),
        keyword_asc: _ => token('ASC'),
        keyword_desc: _ => token('DESC'),
        keyword_order_by: _ => token('ORDER BY'),
        keyword_with: _ => token('WITH'),
        keyword_index: _ => token('INDEX'),
        keyword_no_index: _ => token('NOINDEX'),
        keyword_where: _ => token('WHERE'),
        keyword_split: _ => token('SPLIT'),
        keyword_at: _ => token('AT'),
        keyword_group_by: _ => token('GROUP BY'),
        keyword_true: _ => token("TRUE"),
        keyword_false: _ => token("FALSE"),
        semi_colon: _ => token(';'),

        select_statement: $ => seq($._select_statement),

        _select_statement: $ => prec.right(
            seq(
                $.select_clause,
                optional($.omit_clause),
                $.from_clause,
                optional($.with_clause),
                optional($.where_clause),
                optional($.split_clause),
                optional($.group_by_clause),
                optional($.order_by_clause),
                optional($.limit_clause),
                optional($.start_clause),
                optional($.fetch_clause),
                optional($.timeout_clause),
                optional($.keyword_parallel),
                optional($.explain_clause)
            ),
        ),

        _aliased_expression: $ => seq(
            $.identifier,
            $.keyword_as,
            $.identifier
        ),

        _aliasable_expression: $ =>
            prec.right(choice($._expression, $._aliased_expression)),

        select_clause: $ =>
            prec.right(
                seq(
                    $.keyword_select,
                    optional(
                        commaSep1(
                            seq(
                                $._aliasable_expression
                            )
                        )
                    ),
                ),
            ),

        from_clause: $ => seq(
            $.keyword_from,
            commaSep1($._from_targets)),

        _from_targets: $ =>
            seq(
                optional($.keyword_only),
                $.identifier,
            ),

        omit_clause: $ => seq(
            $.keyword_omit,
            commaSep1($.identifier)
        ),

        with_clause: $ => seq(
            $.keyword_with,
            choice(
                $.keyword_no_index,
                seq($.keyword_index, commaSep1($.identifier))
            )
        ),

        where_clause: $ => seq(
            $.keyword_where,
        ),

        split_clause: $ => seq(
            $.keyword_split,
            optional($.keyword_at),
            commaSep1($.identifier)
        ),

        group_by_clause: $ => seq(
            $.keyword_group_by,
            commaSep1($.identifier)
        ),

        order_by_clause: $ => seq(
            $.keyword_order_by,
            commaSep1($.order_criteria)
        ),

        order_criteria: $ => seq(
            $.identifier,
            optional(choice(
                $.keyword_rand,
                $.keyword_collate,
                $.keyword_numeric,
            )),
            optional(choice($.keyword_asc, $.keyword_desc))
        ),

        limit_clause: $ => seq(
            $.keyword_limit,
            optional($.keyword_by),
            $.number
        ),

        start_clause: $ => seq(
            $.keyword_start_at,
            $.number
        ),

        fetch_clause: $ => seq(
            $.keyword_fetch,
            commaSep1($.identifier)
        ),

        timeout_clause: $ => seq(
            $.keyword_timeout,
            $.number
        ),

        explain_clause: $ => seq(
            $.keyword_explain,
            optional($.keyword_full)
        ),

        identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
        number: _ => /\d+/,
        asterisk_expression: $ => choice("*", seq($.identifier, ".*")),
        _expression: $ =>
            choice(
                $.identifier,
                $.keyword_true,
                $.keyword_false,
                $.asterisk_expression,
                $.number,
            ),
    }
});

// -- https://github.com/m-novikov/tree-sitter-sql/blob/main/grammar.js#L1286
function commaSep1(rule) {
    return sep1(rule, ",");
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}
