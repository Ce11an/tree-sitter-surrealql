#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_keyword_select = 2,
  sym_keyword_from = 3,
  sym_keyword_only = 4,
  sym_keyword_value = 5,
  sym_keyword_as = 6,
  sym_keyword_omit = 7,
  sym_keyword_explain = 8,
  sym_keyword_full = 9,
  sym_keyword_parallel = 10,
  sym_keyword_timeout = 11,
  sym_keyword_fetch = 12,
  sym_keyword_start_at = 13,
  sym_keyword_limit = 14,
  sym_keyword_by = 15,
  sym_keyword_rand = 16,
  sym_keyword_collate = 17,
  sym_keyword_numeric = 18,
  sym_keyword_asc = 19,
  sym_keyword_desc = 20,
  sym_keyword_order_by = 21,
  sym_keyword_with = 22,
  sym_keyword_index = 23,
  sym_keyword_no_index = 24,
  sym_keyword_where = 25,
  sym_keyword_split = 26,
  sym_keyword_at = 27,
  sym_keyword_group_by = 28,
  sym_keyword_true = 29,
  sym_keyword_false = 30,
  sym_semi_colon = 31,
  anon_sym_COMMA = 32,
  sym_identifier = 33,
  sym_number = 34,
  anon_sym_STAR = 35,
  anon_sym_DOT_STAR = 36,
  sym_source_file = 37,
  sym__statement = 38,
  sym_select_statement = 39,
  sym__select_statement = 40,
  sym__aliased_expression = 41,
  sym__aliasable_expression = 42,
  sym_select_clause = 43,
  sym_from_clause = 44,
  sym__from_targets = 45,
  sym_omit_clause = 46,
  sym_with_clause = 47,
  sym_where_clause = 48,
  sym_split_clause = 49,
  sym_group_by_clause = 50,
  sym_order_by_clause = 51,
  sym_order_criteria = 52,
  sym_limit_clause = 53,
  sym_start_clause = 54,
  sym_fetch_clause = 55,
  sym_timeout_clause = 56,
  sym_explain_clause = 57,
  sym_asterisk_expression = 58,
  sym__expression = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_select_clause_repeat1 = 61,
  aux_sym_from_clause_repeat1 = 62,
  aux_sym_omit_clause_repeat1 = 63,
  aux_sym_order_by_clause_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_only] = "keyword_only",
  [sym_keyword_value] = "keyword_value",
  [sym_keyword_as] = "keyword_as",
  [sym_keyword_omit] = "keyword_omit",
  [sym_keyword_explain] = "keyword_explain",
  [sym_keyword_full] = "keyword_full",
  [sym_keyword_parallel] = "keyword_parallel",
  [sym_keyword_timeout] = "keyword_timeout",
  [sym_keyword_fetch] = "keyword_fetch",
  [sym_keyword_start_at] = "keyword_start_at",
  [sym_keyword_limit] = "keyword_limit",
  [sym_keyword_by] = "keyword_by",
  [sym_keyword_rand] = "keyword_rand",
  [sym_keyword_collate] = "keyword_collate",
  [sym_keyword_numeric] = "keyword_numeric",
  [sym_keyword_asc] = "keyword_asc",
  [sym_keyword_desc] = "keyword_desc",
  [sym_keyword_order_by] = "keyword_order_by",
  [sym_keyword_with] = "keyword_with",
  [sym_keyword_index] = "keyword_index",
  [sym_keyword_no_index] = "keyword_no_index",
  [sym_keyword_where] = "keyword_where",
  [sym_keyword_split] = "keyword_split",
  [sym_keyword_at] = "keyword_at",
  [sym_keyword_group_by] = "keyword_group_by",
  [sym_keyword_true] = "keyword_true",
  [sym_keyword_false] = "keyword_false",
  [sym_semi_colon] = "semi_colon",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT_STAR] = ".*",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_select_statement] = "select_statement",
  [sym__select_statement] = "_select_statement",
  [sym__aliased_expression] = "_aliased_expression",
  [sym__aliasable_expression] = "_aliasable_expression",
  [sym_select_clause] = "select_clause",
  [sym_from_clause] = "from_clause",
  [sym__from_targets] = "_from_targets",
  [sym_omit_clause] = "omit_clause",
  [sym_with_clause] = "with_clause",
  [sym_where_clause] = "where_clause",
  [sym_split_clause] = "split_clause",
  [sym_group_by_clause] = "group_by_clause",
  [sym_order_by_clause] = "order_by_clause",
  [sym_order_criteria] = "order_criteria",
  [sym_limit_clause] = "limit_clause",
  [sym_start_clause] = "start_clause",
  [sym_fetch_clause] = "fetch_clause",
  [sym_timeout_clause] = "timeout_clause",
  [sym_explain_clause] = "explain_clause",
  [sym_asterisk_expression] = "asterisk_expression",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_clause_repeat1] = "select_clause_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_omit_clause_repeat1] = "omit_clause_repeat1",
  [aux_sym_order_by_clause_repeat1] = "order_by_clause_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_only] = sym_keyword_only,
  [sym_keyword_value] = sym_keyword_value,
  [sym_keyword_as] = sym_keyword_as,
  [sym_keyword_omit] = sym_keyword_omit,
  [sym_keyword_explain] = sym_keyword_explain,
  [sym_keyword_full] = sym_keyword_full,
  [sym_keyword_parallel] = sym_keyword_parallel,
  [sym_keyword_timeout] = sym_keyword_timeout,
  [sym_keyword_fetch] = sym_keyword_fetch,
  [sym_keyword_start_at] = sym_keyword_start_at,
  [sym_keyword_limit] = sym_keyword_limit,
  [sym_keyword_by] = sym_keyword_by,
  [sym_keyword_rand] = sym_keyword_rand,
  [sym_keyword_collate] = sym_keyword_collate,
  [sym_keyword_numeric] = sym_keyword_numeric,
  [sym_keyword_asc] = sym_keyword_asc,
  [sym_keyword_desc] = sym_keyword_desc,
  [sym_keyword_order_by] = sym_keyword_order_by,
  [sym_keyword_with] = sym_keyword_with,
  [sym_keyword_index] = sym_keyword_index,
  [sym_keyword_no_index] = sym_keyword_no_index,
  [sym_keyword_where] = sym_keyword_where,
  [sym_keyword_split] = sym_keyword_split,
  [sym_keyword_at] = sym_keyword_at,
  [sym_keyword_group_by] = sym_keyword_group_by,
  [sym_keyword_true] = sym_keyword_true,
  [sym_keyword_false] = sym_keyword_false,
  [sym_semi_colon] = sym_semi_colon,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_select_statement] = sym_select_statement,
  [sym__select_statement] = sym__select_statement,
  [sym__aliased_expression] = sym__aliased_expression,
  [sym__aliasable_expression] = sym__aliasable_expression,
  [sym_select_clause] = sym_select_clause,
  [sym_from_clause] = sym_from_clause,
  [sym__from_targets] = sym__from_targets,
  [sym_omit_clause] = sym_omit_clause,
  [sym_with_clause] = sym_with_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_split_clause] = sym_split_clause,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_order_criteria] = sym_order_criteria,
  [sym_limit_clause] = sym_limit_clause,
  [sym_start_clause] = sym_start_clause,
  [sym_fetch_clause] = sym_fetch_clause,
  [sym_timeout_clause] = sym_timeout_clause,
  [sym_explain_clause] = sym_explain_clause,
  [sym_asterisk_expression] = sym_asterisk_expression,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_clause_repeat1] = aux_sym_select_clause_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_omit_clause_repeat1] = aux_sym_omit_clause_repeat1,
  [aux_sym_order_by_clause_repeat1] = aux_sym_order_by_clause_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_select] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_only] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_as] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_omit] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_explain] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_full] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_parallel] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_fetch] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_start_at] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_rand] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_collate] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_asc] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_with] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_index] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_no_index] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_where] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_split] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_at] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_true] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_false] = {
    .visible = true,
    .named = true,
  },
  [sym_semi_colon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__select_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__aliased_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__aliasable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__from_targets] = {
    .visible = false,
    .named = true,
  },
  [sym_omit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_split_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_start_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_fetch_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_explain_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_omit_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'B') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(167);
      if (lookahead == 'O') ADVANCE(174);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(147);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(187);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(149);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(150);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'H') ADVANCE(153);
      END_STATE();
    case 54:
      if (lookahead == 'H') ADVANCE(143);
      END_STATE();
    case 55:
      if (lookahead == 'H') ADVANCE(47);
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'M') ADVANCE(131);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 82:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'P') ADVANCE(3);
      END_STATE();
    case 93:
      if (lookahead == 'P') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(136);
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(157);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(5);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 117:
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(109);
      END_STATE();
    case 119:
      if (lookahead == 'X') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'X') ADVANCE(154);
      END_STATE();
    case 121:
      if (lookahead == 'X') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 'Y') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 'Y') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'Y') ADVANCE(160);
      END_STATE();
    case 125:
      if (lookahead == 'Y') ADVANCE(152);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(126)
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_keyword_only);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_keyword_only);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_keyword_value);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_keyword_omit);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_keyword_omit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_keyword_explain);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_keyword_parallel);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_keyword_timeout);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_keyword_fetch);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_keyword_start_at);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_keyword_by);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_keyword_rand);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_keyword_collate);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_keyword_with);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_keyword_no_index);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_keyword_split);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_keyword_at);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_keyword_at);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_semi_colon);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 126},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 126},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_only] = ACTIONS(1),
    [sym_keyword_value] = ACTIONS(1),
    [sym_keyword_as] = ACTIONS(1),
    [sym_keyword_omit] = ACTIONS(1),
    [sym_keyword_explain] = ACTIONS(1),
    [sym_keyword_full] = ACTIONS(1),
    [sym_keyword_parallel] = ACTIONS(1),
    [sym_keyword_timeout] = ACTIONS(1),
    [sym_keyword_fetch] = ACTIONS(1),
    [sym_keyword_start_at] = ACTIONS(1),
    [sym_keyword_limit] = ACTIONS(1),
    [sym_keyword_by] = ACTIONS(1),
    [sym_keyword_rand] = ACTIONS(1),
    [sym_keyword_collate] = ACTIONS(1),
    [sym_keyword_numeric] = ACTIONS(1),
    [sym_keyword_desc] = ACTIONS(1),
    [sym_keyword_order_by] = ACTIONS(1),
    [sym_keyword_with] = ACTIONS(1),
    [sym_keyword_index] = ACTIONS(1),
    [sym_keyword_no_index] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [sym_keyword_split] = ACTIONS(1),
    [sym_keyword_at] = ACTIONS(1),
    [sym_keyword_group_by] = ACTIONS(1),
    [sym_keyword_true] = ACTIONS(1),
    [sym_keyword_false] = ACTIONS(1),
    [sym_semi_colon] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(148),
    [sym__statement] = STATE(81),
    [sym_select_statement] = STATE(110),
    [sym__select_statement] = STATE(127),
    [sym_select_clause] = STATE(107),
    [aux_sym_source_file_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_keyword_select] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(25), 1,
      sym_keyword_with,
    ACTIONS(27), 1,
      sym_keyword_where,
    ACTIONS(29), 1,
      sym_keyword_split,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    STATE(5), 1,
      sym_with_clause,
    STATE(6), 1,
      sym_where_clause,
    STATE(10), 1,
      sym_split_clause,
    STATE(21), 1,
      sym_group_by_clause,
    STATE(33), 1,
      sym_order_by_clause,
    STATE(40), 1,
      sym_limit_clause,
    STATE(55), 1,
      sym_start_clause,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [72] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(25), 1,
      sym_keyword_with,
    ACTIONS(27), 1,
      sym_keyword_where,
    ACTIONS(29), 1,
      sym_keyword_split,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    ACTIONS(35), 1,
      sym_keyword_parallel,
    STATE(4), 1,
      sym_with_clause,
    STATE(7), 1,
      sym_where_clause,
    STATE(11), 1,
      sym_split_clause,
    STATE(14), 1,
      sym_group_by_clause,
    STATE(30), 1,
      sym_order_by_clause,
    STATE(44), 1,
      sym_limit_clause,
    STATE(58), 1,
      sym_start_clause,
    STATE(74), 1,
      sym_fetch_clause,
    STATE(89), 1,
      sym_timeout_clause,
    STATE(131), 1,
      sym_explain_clause,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [144] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(27), 1,
      sym_keyword_where,
    ACTIONS(29), 1,
      sym_keyword_split,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    STATE(6), 1,
      sym_where_clause,
    STATE(10), 1,
      sym_split_clause,
    STATE(21), 1,
      sym_group_by_clause,
    STATE(33), 1,
      sym_order_by_clause,
    STATE(40), 1,
      sym_limit_clause,
    STATE(55), 1,
      sym_start_clause,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [210] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(27), 1,
      sym_keyword_where,
    ACTIONS(29), 1,
      sym_keyword_split,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(8), 1,
      sym_where_clause,
    STATE(12), 1,
      sym_split_clause,
    STATE(20), 1,
      sym_group_by_clause,
    STATE(32), 1,
      sym_order_by_clause,
    STATE(46), 1,
      sym_limit_clause,
    STATE(63), 1,
      sym_start_clause,
    STATE(70), 1,
      sym_fetch_clause,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [276] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(29), 1,
      sym_keyword_split,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(12), 1,
      sym_split_clause,
    STATE(20), 1,
      sym_group_by_clause,
    STATE(32), 1,
      sym_order_by_clause,
    STATE(46), 1,
      sym_limit_clause,
    STATE(63), 1,
      sym_start_clause,
    STATE(70), 1,
      sym_fetch_clause,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [336] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(29), 1,
      sym_keyword_split,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    STATE(10), 1,
      sym_split_clause,
    STATE(21), 1,
      sym_group_by_clause,
    STATE(33), 1,
      sym_order_by_clause,
    STATE(40), 1,
      sym_limit_clause,
    STATE(55), 1,
      sym_start_clause,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [396] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(29), 1,
      sym_keyword_split,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(9), 1,
      sym_split_clause,
    STATE(13), 1,
      sym_group_by_clause,
    STATE(29), 1,
      sym_order_by_clause,
    STATE(39), 1,
      sym_limit_clause,
    STATE(56), 1,
      sym_start_clause,
    STATE(69), 1,
      sym_fetch_clause,
    STATE(86), 1,
      sym_timeout_clause,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [456] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(19), 1,
      sym_group_by_clause,
    STATE(31), 1,
      sym_order_by_clause,
    STATE(49), 1,
      sym_limit_clause,
    STATE(57), 1,
      sym_start_clause,
    STATE(71), 1,
      sym_fetch_clause,
    STATE(88), 1,
      sym_timeout_clause,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [510] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(20), 1,
      sym_group_by_clause,
    STATE(32), 1,
      sym_order_by_clause,
    STATE(46), 1,
      sym_limit_clause,
    STATE(63), 1,
      sym_start_clause,
    STATE(70), 1,
      sym_fetch_clause,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [564] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    STATE(21), 1,
      sym_group_by_clause,
    STATE(33), 1,
      sym_order_by_clause,
    STATE(40), 1,
      sym_limit_clause,
    STATE(55), 1,
      sym_start_clause,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [618] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(31), 1,
      sym_keyword_group_by,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(13), 1,
      sym_group_by_clause,
    STATE(29), 1,
      sym_order_by_clause,
    STATE(39), 1,
      sym_limit_clause,
    STATE(56), 1,
      sym_start_clause,
    STATE(69), 1,
      sym_fetch_clause,
    STATE(86), 1,
      sym_timeout_clause,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [672] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(31), 1,
      sym_order_by_clause,
    STATE(49), 1,
      sym_limit_clause,
    STATE(57), 1,
      sym_start_clause,
    STATE(71), 1,
      sym_fetch_clause,
    STATE(88), 1,
      sym_timeout_clause,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [720] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    STATE(33), 1,
      sym_order_by_clause,
    STATE(40), 1,
      sym_limit_clause,
    STATE(55), 1,
      sym_start_clause,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(49), 14,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_with,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(54), 14,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_with,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(58), 14,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_with,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(60), 14,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_from,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [872] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(67), 1,
      sym_keyword_parallel,
    STATE(28), 1,
      sym_order_by_clause,
    STATE(47), 1,
      sym_limit_clause,
    STATE(60), 1,
      sym_start_clause,
    STATE(73), 1,
      sym_fetch_clause,
    STATE(91), 1,
      sym_timeout_clause,
    STATE(124), 1,
      sym_explain_clause,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [920] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(29), 1,
      sym_order_by_clause,
    STATE(39), 1,
      sym_limit_clause,
    STATE(56), 1,
      sym_start_clause,
    STATE(69), 1,
      sym_fetch_clause,
    STATE(86), 1,
      sym_timeout_clause,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [968] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(23), 1,
      sym_keyword_order_by,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(32), 1,
      sym_order_by_clause,
    STATE(46), 1,
      sym_limit_clause,
    STATE(63), 1,
      sym_start_clause,
    STATE(70), 1,
      sym_fetch_clause,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 15,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_with,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
      anon_sym_COMMA,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 15,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_from,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
      anon_sym_COMMA,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 15,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_with,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
      anon_sym_COMMA,
  [1104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      sym_keyword_asc,
      sym_keyword_desc,
    ACTIONS(77), 3,
      sym_keyword_rand,
      sym_keyword_collate,
      sym_keyword_numeric,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
      anon_sym_COMMA,
  [1129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(81), 13,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [1154] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(85), 1,
      sym_keyword_parallel,
    STATE(41), 1,
      sym_limit_clause,
    STATE(62), 1,
      sym_start_clause,
    STATE(77), 1,
      sym_fetch_clause,
    STATE(82), 1,
      sym_timeout_clause,
    STATE(130), 1,
      sym_explain_clause,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1196] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(49), 1,
      sym_limit_clause,
    STATE(57), 1,
      sym_start_clause,
    STATE(71), 1,
      sym_fetch_clause,
    STATE(88), 1,
      sym_timeout_clause,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1238] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    STATE(40), 1,
      sym_limit_clause,
    STATE(55), 1,
      sym_start_clause,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1280] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(67), 1,
      sym_keyword_parallel,
    STATE(47), 1,
      sym_limit_clause,
    STATE(60), 1,
      sym_start_clause,
    STATE(73), 1,
      sym_fetch_clause,
    STATE(91), 1,
      sym_timeout_clause,
    STATE(124), 1,
      sym_explain_clause,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1322] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(39), 1,
      sym_limit_clause,
    STATE(56), 1,
      sym_start_clause,
    STATE(69), 1,
      sym_fetch_clause,
    STATE(86), 1,
      sym_timeout_clause,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1364] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(21), 1,
      sym_keyword_limit,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(46), 1,
      sym_limit_clause,
    STATE(63), 1,
      sym_start_clause,
    STATE(70), 1,
      sym_fetch_clause,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_semi_colon,
  [1429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_semi_colon,
  [1452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_semi_colon,
  [1475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_semi_colon,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 13,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_where,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [1517] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(57), 1,
      sym_start_clause,
    STATE(71), 1,
      sym_fetch_clause,
    STATE(88), 1,
      sym_timeout_clause,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1553] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(63), 1,
      sym_start_clause,
    STATE(70), 1,
      sym_fetch_clause,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1589] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(97), 1,
      sym_keyword_parallel,
    STATE(64), 1,
      sym_start_clause,
    STATE(78), 1,
      sym_fetch_clause,
    STATE(84), 1,
      sym_timeout_clause,
    STATE(125), 1,
      sym_explain_clause,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_semi_colon,
  [1647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 12,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_split,
      sym_keyword_group_by,
      sym_semi_colon,
  [1665] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    STATE(55), 1,
      sym_start_clause,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym_keyword_asc,
      sym_keyword_desc,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
      anon_sym_COMMA,
  [1721] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(56), 1,
      sym_start_clause,
    STATE(69), 1,
      sym_fetch_clause,
    STATE(86), 1,
      sym_timeout_clause,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1757] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(85), 1,
      sym_keyword_parallel,
    STATE(62), 1,
      sym_start_clause,
    STATE(77), 1,
      sym_fetch_clause,
    STATE(82), 1,
      sym_timeout_clause,
    STATE(130), 1,
      sym_explain_clause,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_semi_colon,
  [1815] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(19), 1,
      sym_keyword_start_at,
    ACTIONS(67), 1,
      sym_keyword_parallel,
    STATE(60), 1,
      sym_start_clause,
    STATE(73), 1,
      sym_fetch_clause,
    STATE(91), 1,
      sym_timeout_clause,
    STATE(124), 1,
      sym_explain_clause,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1851] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_number,
    ACTIONS(117), 1,
      anon_sym_STAR,
    ACTIONS(109), 2,
      sym_keyword_from,
      sym_keyword_omit,
    ACTIONS(111), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(108), 4,
      sym__aliased_expression,
      sym__aliasable_expression,
      sym_asterisk_expression,
      sym__expression,
  [1878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
  [1899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
  [1920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(125), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
  [1941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
      anon_sym_COMMA,
  [1957] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(70), 1,
      sym_fetch_clause,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [1987] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(71), 1,
      sym_fetch_clause,
    STATE(88), 1,
      sym_timeout_clause,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2017] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(67), 1,
      sym_keyword_parallel,
    STATE(73), 1,
      sym_fetch_clause,
    STATE(91), 1,
      sym_timeout_clause,
    STATE(124), 1,
      sym_explain_clause,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2047] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    STATE(66), 1,
      sym_fetch_clause,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
      anon_sym_COMMA,
  [2093] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(85), 1,
      sym_keyword_parallel,
    STATE(77), 1,
      sym_fetch_clause,
    STATE(82), 1,
      sym_timeout_clause,
    STATE(130), 1,
      sym_explain_clause,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_semi_colon,
      anon_sym_COMMA,
  [2139] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(97), 1,
      sym_keyword_parallel,
    STATE(78), 1,
      sym_fetch_clause,
    STATE(84), 1,
      sym_timeout_clause,
    STATE(125), 1,
      sym_explain_clause,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2169] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(69), 1,
      sym_fetch_clause,
    STATE(86), 1,
      sym_timeout_clause,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2199] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(134), 1,
      sym_keyword_parallel,
    STATE(75), 1,
      sym_fetch_clause,
    STATE(90), 1,
      sym_timeout_clause,
    STATE(117), 1,
      sym_explain_clause,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2229] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(136), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(122), 4,
      sym__aliased_expression,
      sym__aliasable_expression,
      sym_asterisk_expression,
      sym__expression,
  [2252] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(87), 1,
      sym_timeout_clause,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_semi_colon,
  [2294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_semi_colon,
  [2308] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(88), 1,
      sym_timeout_clause,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2332] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(86), 1,
      sym_timeout_clause,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(67), 1,
      sym_keyword_parallel,
    STATE(91), 1,
      sym_timeout_clause,
    STATE(124), 1,
      sym_explain_clause,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_omit_clause_repeat1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_semi_colon,
  [2398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(85), 1,
      sym_keyword_parallel,
    STATE(82), 1,
      sym_timeout_clause,
    STATE(130), 1,
      sym_explain_clause,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2422] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    STATE(83), 1,
      sym_timeout_clause,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2446] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(148), 1,
      sym_keyword_parallel,
    STATE(85), 1,
      sym_timeout_clause,
    STATE(113), 1,
      sym_explain_clause,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_semi_colon,
  [2484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(97), 1,
      sym_keyword_parallel,
    STATE(84), 1,
      sym_timeout_clause,
    STATE(125), 1,
      sym_explain_clause,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(134), 1,
      sym_keyword_parallel,
    STATE(90), 1,
      sym_timeout_clause,
    STATE(117), 1,
      sym_explain_clause,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2532] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      sym_keyword_select,
    STATE(107), 1,
      sym_select_clause,
    STATE(110), 1,
      sym_select_statement,
    STATE(127), 1,
      sym__select_statement,
    STATE(79), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_semi_colon,
  [2568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_keyword_select,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_select_clause,
    STATE(110), 1,
      sym_select_statement,
    STATE(127), 1,
      sym__select_statement,
    STATE(79), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [2591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(97), 1,
      sym_keyword_parallel,
    STATE(125), 1,
      sym_explain_clause,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(134), 1,
      sym_keyword_parallel,
    STATE(117), 1,
      sym_explain_clause,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2645] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(163), 1,
      sym_keyword_parallel,
    STATE(123), 1,
      sym_explain_clause,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(67), 1,
      sym_keyword_parallel,
    STATE(124), 1,
      sym_explain_clause,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(148), 1,
      sym_keyword_parallel,
    STATE(113), 1,
      sym_explain_clause,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(85), 1,
      sym_keyword_parallel,
    STATE(130), 1,
      sym_explain_clause,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(132), 1,
      sym_explain_clause,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(113), 1,
      sym_explain_clause,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_keyword_as,
    ACTIONS(169), 1,
      anon_sym_DOT_STAR,
    ACTIONS(165), 3,
      sym_keyword_from,
      sym_keyword_omit,
      anon_sym_COMMA,
  [2816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(130), 1,
      sym_explain_clause,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(117), 1,
      sym_explain_clause,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_semi_colon,
  [2857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(124), 1,
      sym_explain_clause,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(123), 1,
      sym_explain_clause,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(111), 1,
      sym_explain_clause,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(125), 1,
      sym_explain_clause,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(129), 1,
      sym_explain_clause,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(112), 1,
      sym_explain_clause,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(116), 1,
      sym_explain_clause,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(175), 2,
      sym_keyword_from,
      sym_keyword_omit,
  [2976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_keyword_full,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [2988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_keyword_from,
    ACTIONS(185), 1,
      sym_keyword_omit,
    STATE(3), 1,
      sym_from_clause,
    STATE(139), 1,
      sym_omit_clause,
  [3004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(187), 2,
      sym_keyword_from,
      sym_keyword_omit,
  [3018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(189), 2,
      sym_keyword_from,
      sym_keyword_omit,
  [3032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_semi_colon,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      sym_keyword_from,
    STATE(18), 1,
      aux_sym_omit_clause_repeat1,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      sym_keyword_from,
      sym_keyword_omit,
      anon_sym_COMMA,
  [3119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_keyword_only,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(16), 1,
      sym__from_targets,
  [3132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_keyword_only,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(22), 1,
      sym__from_targets,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      sym_keyword_from,
      sym_keyword_omit,
      anon_sym_COMMA,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      sym_keyword_from,
      sym_keyword_omit,
      anon_sym_COMMA,
  [3163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 3,
      sym_keyword_from,
      sym_keyword_omit,
      anon_sym_COMMA,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      sym_keyword_from,
    STATE(115), 1,
      aux_sym_omit_clause_repeat1,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_semi_colon,
  [3257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_keyword_at,
    ACTIONS(222), 1,
      sym_identifier,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(59), 1,
      sym_order_criteria,
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_keyword_index,
    ACTIONS(228), 1,
      sym_keyword_no_index,
  [3287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(52), 1,
      sym_order_criteria,
  [3297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_keyword_by,
    ACTIONS(232), 1,
      sym_number,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [3315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_keyword_from,
    STATE(2), 1,
      sym_from_clause,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_identifier,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_identifier,
  [3339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_number,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_identifier,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_number,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_identifier,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 336,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 456,
  [SMALL_STATE(10)] = 510,
  [SMALL_STATE(11)] = 564,
  [SMALL_STATE(12)] = 618,
  [SMALL_STATE(13)] = 672,
  [SMALL_STATE(14)] = 720,
  [SMALL_STATE(15)] = 768,
  [SMALL_STATE(16)] = 794,
  [SMALL_STATE(17)] = 820,
  [SMALL_STATE(18)] = 846,
  [SMALL_STATE(19)] = 872,
  [SMALL_STATE(20)] = 920,
  [SMALL_STATE(21)] = 968,
  [SMALL_STATE(22)] = 1016,
  [SMALL_STATE(23)] = 1037,
  [SMALL_STATE(24)] = 1062,
  [SMALL_STATE(25)] = 1083,
  [SMALL_STATE(26)] = 1104,
  [SMALL_STATE(27)] = 1129,
  [SMALL_STATE(28)] = 1154,
  [SMALL_STATE(29)] = 1196,
  [SMALL_STATE(30)] = 1238,
  [SMALL_STATE(31)] = 1280,
  [SMALL_STATE(32)] = 1322,
  [SMALL_STATE(33)] = 1364,
  [SMALL_STATE(34)] = 1406,
  [SMALL_STATE(35)] = 1429,
  [SMALL_STATE(36)] = 1452,
  [SMALL_STATE(37)] = 1475,
  [SMALL_STATE(38)] = 1498,
  [SMALL_STATE(39)] = 1517,
  [SMALL_STATE(40)] = 1553,
  [SMALL_STATE(41)] = 1589,
  [SMALL_STATE(42)] = 1625,
  [SMALL_STATE(43)] = 1647,
  [SMALL_STATE(44)] = 1665,
  [SMALL_STATE(45)] = 1701,
  [SMALL_STATE(46)] = 1721,
  [SMALL_STATE(47)] = 1757,
  [SMALL_STATE(48)] = 1793,
  [SMALL_STATE(49)] = 1815,
  [SMALL_STATE(50)] = 1851,
  [SMALL_STATE(51)] = 1878,
  [SMALL_STATE(52)] = 1899,
  [SMALL_STATE(53)] = 1920,
  [SMALL_STATE(54)] = 1941,
  [SMALL_STATE(55)] = 1957,
  [SMALL_STATE(56)] = 1987,
  [SMALL_STATE(57)] = 2017,
  [SMALL_STATE(58)] = 2047,
  [SMALL_STATE(59)] = 2077,
  [SMALL_STATE(60)] = 2093,
  [SMALL_STATE(61)] = 2123,
  [SMALL_STATE(62)] = 2139,
  [SMALL_STATE(63)] = 2169,
  [SMALL_STATE(64)] = 2199,
  [SMALL_STATE(65)] = 2229,
  [SMALL_STATE(66)] = 2252,
  [SMALL_STATE(67)] = 2276,
  [SMALL_STATE(68)] = 2294,
  [SMALL_STATE(69)] = 2308,
  [SMALL_STATE(70)] = 2332,
  [SMALL_STATE(71)] = 2356,
  [SMALL_STATE(72)] = 2380,
  [SMALL_STATE(73)] = 2398,
  [SMALL_STATE(74)] = 2422,
  [SMALL_STATE(75)] = 2446,
  [SMALL_STATE(76)] = 2470,
  [SMALL_STATE(77)] = 2484,
  [SMALL_STATE(78)] = 2508,
  [SMALL_STATE(79)] = 2532,
  [SMALL_STATE(80)] = 2555,
  [SMALL_STATE(81)] = 2568,
  [SMALL_STATE(82)] = 2591,
  [SMALL_STATE(83)] = 2609,
  [SMALL_STATE(84)] = 2627,
  [SMALL_STATE(85)] = 2645,
  [SMALL_STATE(86)] = 2663,
  [SMALL_STATE(87)] = 2681,
  [SMALL_STATE(88)] = 2699,
  [SMALL_STATE(89)] = 2717,
  [SMALL_STATE(90)] = 2735,
  [SMALL_STATE(91)] = 2753,
  [SMALL_STATE(92)] = 2771,
  [SMALL_STATE(93)] = 2786,
  [SMALL_STATE(94)] = 2801,
  [SMALL_STATE(95)] = 2816,
  [SMALL_STATE(96)] = 2831,
  [SMALL_STATE(97)] = 2846,
  [SMALL_STATE(98)] = 2857,
  [SMALL_STATE(99)] = 2872,
  [SMALL_STATE(100)] = 2887,
  [SMALL_STATE(101)] = 2902,
  [SMALL_STATE(102)] = 2917,
  [SMALL_STATE(103)] = 2932,
  [SMALL_STATE(104)] = 2947,
  [SMALL_STATE(105)] = 2962,
  [SMALL_STATE(106)] = 2976,
  [SMALL_STATE(107)] = 2988,
  [SMALL_STATE(108)] = 3004,
  [SMALL_STATE(109)] = 3018,
  [SMALL_STATE(110)] = 3032,
  [SMALL_STATE(111)] = 3043,
  [SMALL_STATE(112)] = 3052,
  [SMALL_STATE(113)] = 3061,
  [SMALL_STATE(114)] = 3070,
  [SMALL_STATE(115)] = 3079,
  [SMALL_STATE(116)] = 3092,
  [SMALL_STATE(117)] = 3101,
  [SMALL_STATE(118)] = 3110,
  [SMALL_STATE(119)] = 3119,
  [SMALL_STATE(120)] = 3132,
  [SMALL_STATE(121)] = 3145,
  [SMALL_STATE(122)] = 3154,
  [SMALL_STATE(123)] = 3163,
  [SMALL_STATE(124)] = 3172,
  [SMALL_STATE(125)] = 3181,
  [SMALL_STATE(126)] = 3190,
  [SMALL_STATE(127)] = 3199,
  [SMALL_STATE(128)] = 3208,
  [SMALL_STATE(129)] = 3221,
  [SMALL_STATE(130)] = 3230,
  [SMALL_STATE(131)] = 3239,
  [SMALL_STATE(132)] = 3248,
  [SMALL_STATE(133)] = 3257,
  [SMALL_STATE(134)] = 3267,
  [SMALL_STATE(135)] = 3277,
  [SMALL_STATE(136)] = 3287,
  [SMALL_STATE(137)] = 3297,
  [SMALL_STATE(138)] = 3307,
  [SMALL_STATE(139)] = 3315,
  [SMALL_STATE(140)] = 3325,
  [SMALL_STATE(141)] = 3332,
  [SMALL_STATE(142)] = 3339,
  [SMALL_STATE(143)] = 3346,
  [SMALL_STATE(144)] = 3353,
  [SMALL_STATE(145)] = 3360,
  [SMALL_STATE(146)] = 3367,
  [SMALL_STATE(147)] = 3374,
  [SMALL_STATE(148)] = 3381,
  [SMALL_STATE(149)] = 3388,
  [SMALL_STATE(150)] = 3395,
  [SMALL_STATE(151)] = 3402,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(120),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_omit_clause_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_omit_clause_repeat1, 2), SHIFT_REPEAT(144),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_targets, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_criteria, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_clause, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_clause, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_clause, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 9),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_criteria, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2), SHIFT_REPEAT(134),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_criteria, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 10),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fetch_clause, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fetch_clause, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 11),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_clause, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 12),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout_clause, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 13),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explain_clause, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2), SHIFT_REPEAT(65),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 14),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explain_clause, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_clause, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk_expression, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk_expression, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_clause, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surrealql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
