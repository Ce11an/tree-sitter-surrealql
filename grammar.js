module.exports = grammar({
    name: 'surrealql',

    extras: $ => [
        $.comment,
        /[\s\uFEFF\u2060\u200B\u00A0]/
    ],

    rules: {
        source_file: $ => repeat($._statement),

        comment: _ => token(choice(
            seq('--', /.*/),
            seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
        )),

        _statement: $ => seq(
            $.select_statement,
            ';'
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

        select_statement: $ => seq(
            $.keyword_select,
            optional($.keyword_value),
            optional($.select_fields),
            optional($.select_alias),
            optional($.select_omit),
            $.keyword_from,
            optional($.keyword_only),
            $.select_targets,
            optional($.select_with),
            optional($.select_where),
            optional($.select_split),
            optional($.select_group_by),
            optional($.select_order_by),
            optional($.select_limit),
            optional($.select_start),
            optional($.select_fetch),
            optional($.select_timeout),
            optional($.keyword_parallel),
            optional($.select_explain)
        ),

        select_fields: $ => choice(
            token('*'),
            seq(field('fields', $.identifier)
            )
        ),

        select_alias: $ => seq(
            $.keyword_as,
            field('alias', $.identifier)
        ),

        select_omit: $ => seq(
            $.keyword_omit,
            repeat1($.identifier)
        ),

        select_targets: $ => repeat1($.identifier),


        select_with: $ => seq(
            $.keyword_with,
            choice(
                $.keyword_no_index,
                seq($.keyword_index, repeat1($.identifier))
            )
        ),

        select_where: $ => seq(
            $.keyword_where,
        ),

        select_split: $ => seq(
            $.keyword_split,
            optional($.keyword_at),
            repeat1($.identifier)
        ),

        select_group_by: $ => seq(
            $.keyword_group_by,
            repeat1($.identifier)
        ),

        select_order_by: $ => seq(
            $.keyword_order_by,
            repeat1($.order_criteria)
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

        select_limit: $ => seq(
            $.keyword_limit,
            optional($.keyword_by),
            $.number
        ),

        select_start: $ => seq(
            $.keyword_start_at,
            $.number
        ),

        select_fetch: $ => seq(
            $.keyword_fetch,
            repeat1($.identifier)
        ),

        select_timeout: $ => seq(
            $.keyword_timeout,
            $.number
        ),

        select_explain: $ => seq(
            $.keyword_explain,
            optional($.keyword_full)
        ),

        identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
        number: _ => /\d+/,
    }
});
