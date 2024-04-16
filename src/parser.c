#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  anon_sym_SEMI = 2,
  sym_keyword_select = 3,
  sym_keyword_from = 4,
  sym_keyword_only = 5,
  sym_keyword_value = 6,
  sym_keyword_as = 7,
  sym_keyword_omit = 8,
  sym_keyword_explain = 9,
  sym_keyword_full = 10,
  sym_keyword_parallel = 11,
  sym_keyword_timeout = 12,
  sym_keyword_fetch = 13,
  sym_keyword_start_at = 14,
  sym_keyword_limit = 15,
  sym_keyword_by = 16,
  sym_keyword_rand = 17,
  sym_keyword_collate = 18,
  sym_keyword_numeric = 19,
  sym_keyword_asc = 20,
  sym_keyword_desc = 21,
  sym_keyword_order_by = 22,
  sym_keyword_with = 23,
  sym_keyword_index = 24,
  sym_keyword_no_index = 25,
  sym_keyword_where = 26,
  sym_keyword_split = 27,
  sym_keyword_at = 28,
  sym_keyword_group_by = 29,
  anon_sym_STAR = 30,
  sym_identifier = 31,
  sym_number = 32,
  sym_source_file = 33,
  sym__statement = 34,
  sym_select_statement = 35,
  sym_select_fields = 36,
  sym_select_alias = 37,
  sym_select_omit = 38,
  sym_select_targets = 39,
  sym_select_with = 40,
  sym_select_where = 41,
  sym_select_split = 42,
  sym_select_group_by = 43,
  sym_select_order_by = 44,
  sym_order_criteria = 45,
  sym_select_limit = 46,
  sym_select_start = 47,
  sym_select_fetch = 48,
  sym_select_timeout = 49,
  sym_select_explain = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_select_omit_repeat1 = 52,
  aux_sym_select_order_by_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_STAR] = "*",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_fields] = "select_fields",
  [sym_select_alias] = "select_alias",
  [sym_select_omit] = "select_omit",
  [sym_select_targets] = "select_targets",
  [sym_select_with] = "select_with",
  [sym_select_where] = "select_where",
  [sym_select_split] = "select_split",
  [sym_select_group_by] = "select_group_by",
  [sym_select_order_by] = "select_order_by",
  [sym_order_criteria] = "order_criteria",
  [sym_select_limit] = "select_limit",
  [sym_select_start] = "select_start",
  [sym_select_fetch] = "select_fetch",
  [sym_select_timeout] = "select_timeout",
  [sym_select_explain] = "select_explain",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_omit_repeat1] = "select_omit_repeat1",
  [aux_sym_select_order_by_repeat1] = "select_order_by_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_fields] = sym_select_fields,
  [sym_select_alias] = sym_select_alias,
  [sym_select_omit] = sym_select_omit,
  [sym_select_targets] = sym_select_targets,
  [sym_select_with] = sym_select_with,
  [sym_select_where] = sym_select_where,
  [sym_select_split] = sym_select_split,
  [sym_select_group_by] = sym_select_group_by,
  [sym_select_order_by] = sym_select_order_by,
  [sym_order_criteria] = sym_order_criteria,
  [sym_select_limit] = sym_select_limit,
  [sym_select_start] = sym_select_start,
  [sym_select_fetch] = sym_select_fetch,
  [sym_select_timeout] = sym_select_timeout,
  [sym_select_explain] = sym_select_explain,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_omit_repeat1] = aux_sym_select_omit_repeat1,
  [aux_sym_select_order_by_repeat1] = aux_sym_select_order_by_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_STAR] = {
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
  [sym_select_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_select_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_select_omit] = {
    .visible = true,
    .named = true,
  },
  [sym_select_targets] = {
    .visible = true,
    .named = true,
  },
  [sym_select_with] = {
    .visible = true,
    .named = true,
  },
  [sym_select_where] = {
    .visible = true,
    .named = true,
  },
  [sym_select_split] = {
    .visible = true,
    .named = true,
  },
  [sym_select_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_select_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_order_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_select_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_select_start] = {
    .visible = true,
    .named = true,
  },
  [sym_select_fetch] = {
    .visible = true,
    .named = true,
  },
  [sym_select_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym_select_explain] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_omit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_order_by_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_fields = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_fields] = "fields",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_fields, 0},
  [1] =
    {field_alias, 1},
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
  [41] = 37,
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
  [53] = 37,
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
  [66] = 37,
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
  [95] = 37,
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
  [136] = 37,
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
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(123);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(119);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == 'W') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'F') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'V') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'F') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(230);
      if (lookahead == 'D') ADVANCE(198);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(256);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(176);
      if (lookahead == 'S') ADVANCE(254);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'D') ADVANCE(198);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(254);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'G') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'O') ADVANCE(235);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'W') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'G') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'O') ADVANCE(235);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'G') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'O') ADVANCE(235);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(254);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'O') ADVANCE(235);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(254);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(254);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(121);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(157);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'H') ADVANCE(160);
      END_STATE();
    case 57:
      if (lookahead == 'H') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 'H') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(114);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'P') ADVANCE(1);
      END_STATE();
    case 94:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 100:
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(166);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 'X') ADVANCE(94);
      END_STATE();
    case 117:
      if (lookahead == 'X') ADVANCE(162);
      END_STATE();
    case 118:
      if (lookahead == 'X') ADVANCE(163);
      END_STATE();
    case 119:
      if (lookahead == 'Y') ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'Y') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'Y') ADVANCE(170);
      END_STATE();
    case 122:
      if (lookahead == 'Y') ADVANCE(159);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_keyword_only);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_keyword_only);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_keyword_value);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_keyword_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_keyword_omit);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_keyword_omit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_keyword_explain);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_keyword_explain);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_keyword_parallel);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_keyword_parallel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_keyword_timeout);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_keyword_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_keyword_fetch);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_keyword_fetch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_keyword_start_at);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_keyword_by);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword_rand);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_keyword_collate);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_keyword_collate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_keyword_numeric);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_keyword_with);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_keyword_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_keyword_no_index);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_keyword_split);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_keyword_split);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_keyword_at);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_keyword_at);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(193);
      if (lookahead == 'I') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(217);
      if (lookahead == 'T') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 18},
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
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 20},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 22},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 22},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(181),
    [sym__statement] = STATE(109),
    [sym_select_statement] = STATE(172),
    [aux_sym_source_file_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_keyword_select] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
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
    STATE(9), 1,
      sym_select_with,
    STATE(14), 1,
      sym_select_where,
    STATE(24), 1,
      sym_select_split,
    STATE(34), 1,
      sym_select_group_by,
    STATE(52), 1,
      sym_select_order_by,
    STATE(60), 1,
      sym_select_limit,
    STATE(75), 1,
      sym_select_start,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [70] = 23,
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
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      sym_keyword_parallel,
    STATE(13), 1,
      sym_select_with,
    STATE(19), 1,
      sym_select_where,
    STATE(27), 1,
      sym_select_split,
    STATE(39), 1,
      sym_select_group_by,
    STATE(46), 1,
      sym_select_order_by,
    STATE(73), 1,
      sym_select_limit,
    STATE(83), 1,
      sym_select_start,
    STATE(93), 1,
      sym_select_fetch,
    STATE(112), 1,
      sym_select_timeout,
    STATE(182), 1,
      sym_select_explain,
  [140] = 23,
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
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(10), 1,
      sym_select_with,
    STATE(17), 1,
      sym_select_where,
    STATE(25), 1,
      sym_select_split,
    STATE(29), 1,
      sym_select_group_by,
    STATE(47), 1,
      sym_select_order_by,
    STATE(57), 1,
      sym_select_limit,
    STATE(88), 1,
      sym_select_start,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [210] = 23,
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
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(8), 1,
      sym_select_with,
    STATE(16), 1,
      sym_select_where,
    STATE(23), 1,
      sym_select_split,
    STATE(32), 1,
      sym_select_group_by,
    STATE(45), 1,
      sym_select_order_by,
    STATE(59), 1,
      sym_select_limit,
    STATE(85), 1,
      sym_select_start,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [280] = 23,
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
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(12), 1,
      sym_select_with,
    STATE(18), 1,
      sym_select_where,
    STATE(26), 1,
      sym_select_split,
    STATE(30), 1,
      sym_select_group_by,
    STATE(43), 1,
      sym_select_order_by,
    STATE(68), 1,
      sym_select_limit,
    STATE(80), 1,
      sym_select_start,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [350] = 23,
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
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(11), 1,
      sym_select_with,
    STATE(20), 1,
      sym_select_where,
    STATE(28), 1,
      sym_select_split,
    STATE(38), 1,
      sym_select_group_by,
    STATE(48), 1,
      sym_select_order_by,
    STATE(62), 1,
      sym_select_limit,
    STATE(84), 1,
      sym_select_start,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [420] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
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
    STATE(14), 1,
      sym_select_where,
    STATE(24), 1,
      sym_select_split,
    STATE(34), 1,
      sym_select_group_by,
    STATE(52), 1,
      sym_select_order_by,
    STATE(60), 1,
      sym_select_limit,
    STATE(75), 1,
      sym_select_start,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [484] = 21,
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
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(18), 1,
      sym_select_where,
    STATE(26), 1,
      sym_select_split,
    STATE(30), 1,
      sym_select_group_by,
    STATE(43), 1,
      sym_select_order_by,
    STATE(68), 1,
      sym_select_limit,
    STATE(80), 1,
      sym_select_start,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [548] = 21,
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
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(16), 1,
      sym_select_where,
    STATE(23), 1,
      sym_select_split,
    STATE(32), 1,
      sym_select_group_by,
    STATE(45), 1,
      sym_select_order_by,
    STATE(59), 1,
      sym_select_limit,
    STATE(85), 1,
      sym_select_start,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [612] = 21,
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
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(17), 1,
      sym_select_where,
    STATE(25), 1,
      sym_select_split,
    STATE(29), 1,
      sym_select_group_by,
    STATE(47), 1,
      sym_select_order_by,
    STATE(57), 1,
      sym_select_limit,
    STATE(88), 1,
      sym_select_start,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [676] = 21,
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
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(15), 1,
      sym_select_where,
    STATE(21), 1,
      sym_select_split,
    STATE(31), 1,
      sym_select_group_by,
    STATE(49), 1,
      sym_select_order_by,
    STATE(72), 1,
      sym_select_limit,
    STATE(77), 1,
      sym_select_start,
    STATE(92), 1,
      sym_select_fetch,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [740] = 21,
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
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(20), 1,
      sym_select_where,
    STATE(28), 1,
      sym_select_split,
    STATE(38), 1,
      sym_select_group_by,
    STATE(48), 1,
      sym_select_order_by,
    STATE(62), 1,
      sym_select_limit,
    STATE(84), 1,
      sym_select_start,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [804] = 19,
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
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(26), 1,
      sym_select_split,
    STATE(30), 1,
      sym_select_group_by,
    STATE(43), 1,
      sym_select_order_by,
    STATE(68), 1,
      sym_select_limit,
    STATE(80), 1,
      sym_select_start,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [862] = 19,
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
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(22), 1,
      sym_select_split,
    STATE(35), 1,
      sym_select_group_by,
    STATE(51), 1,
      sym_select_order_by,
    STATE(61), 1,
      sym_select_limit,
    STATE(89), 1,
      sym_select_start,
    STATE(90), 1,
      sym_select_fetch,
    STATE(124), 1,
      sym_select_timeout,
    STATE(179), 1,
      sym_select_explain,
  [920] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
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
    STATE(24), 1,
      sym_select_split,
    STATE(34), 1,
      sym_select_group_by,
    STATE(52), 1,
      sym_select_order_by,
    STATE(60), 1,
      sym_select_limit,
    STATE(75), 1,
      sym_select_start,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [978] = 19,
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
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(23), 1,
      sym_select_split,
    STATE(32), 1,
      sym_select_group_by,
    STATE(45), 1,
      sym_select_order_by,
    STATE(59), 1,
      sym_select_limit,
    STATE(85), 1,
      sym_select_start,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [1036] = 19,
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
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(21), 1,
      sym_select_split,
    STATE(31), 1,
      sym_select_group_by,
    STATE(49), 1,
      sym_select_order_by,
    STATE(72), 1,
      sym_select_limit,
    STATE(77), 1,
      sym_select_start,
    STATE(92), 1,
      sym_select_fetch,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [1094] = 19,
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
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(28), 1,
      sym_select_split,
    STATE(38), 1,
      sym_select_group_by,
    STATE(48), 1,
      sym_select_order_by,
    STATE(62), 1,
      sym_select_limit,
    STATE(84), 1,
      sym_select_start,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [1152] = 19,
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
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(25), 1,
      sym_select_split,
    STATE(29), 1,
      sym_select_group_by,
    STATE(47), 1,
      sym_select_order_by,
    STATE(57), 1,
      sym_select_limit,
    STATE(88), 1,
      sym_select_start,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [1210] = 17,
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
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(35), 1,
      sym_select_group_by,
    STATE(51), 1,
      sym_select_order_by,
    STATE(61), 1,
      sym_select_limit,
    STATE(89), 1,
      sym_select_start,
    STATE(90), 1,
      sym_select_fetch,
    STATE(124), 1,
      sym_select_timeout,
    STATE(179), 1,
      sym_select_explain,
  [1262] = 17,
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
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_keyword_parallel,
    STATE(36), 1,
      sym_select_group_by,
    STATE(44), 1,
      sym_select_order_by,
    STATE(64), 1,
      sym_select_limit,
    STATE(78), 1,
      sym_select_start,
    STATE(99), 1,
      sym_select_fetch,
    STATE(120), 1,
      sym_select_timeout,
    STATE(186), 1,
      sym_select_explain,
  [1314] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
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
    STATE(34), 1,
      sym_select_group_by,
    STATE(52), 1,
      sym_select_order_by,
    STATE(60), 1,
      sym_select_limit,
    STATE(75), 1,
      sym_select_start,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [1366] = 17,
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
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(30), 1,
      sym_select_group_by,
    STATE(43), 1,
      sym_select_order_by,
    STATE(68), 1,
      sym_select_limit,
    STATE(80), 1,
      sym_select_start,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [1418] = 17,
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
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(32), 1,
      sym_select_group_by,
    STATE(45), 1,
      sym_select_order_by,
    STATE(59), 1,
      sym_select_limit,
    STATE(85), 1,
      sym_select_start,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [1470] = 17,
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
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(31), 1,
      sym_select_group_by,
    STATE(49), 1,
      sym_select_order_by,
    STATE(72), 1,
      sym_select_limit,
    STATE(77), 1,
      sym_select_start,
    STATE(92), 1,
      sym_select_fetch,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [1522] = 17,
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
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(38), 1,
      sym_select_group_by,
    STATE(48), 1,
      sym_select_order_by,
    STATE(62), 1,
      sym_select_limit,
    STATE(84), 1,
      sym_select_start,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [1574] = 17,
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
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(29), 1,
      sym_select_group_by,
    STATE(47), 1,
      sym_select_order_by,
    STATE(57), 1,
      sym_select_limit,
    STATE(88), 1,
      sym_select_start,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [1626] = 15,
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
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(45), 1,
      sym_select_order_by,
    STATE(59), 1,
      sym_select_limit,
    STATE(85), 1,
      sym_select_start,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [1672] = 15,
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
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(49), 1,
      sym_select_order_by,
    STATE(72), 1,
      sym_select_limit,
    STATE(77), 1,
      sym_select_start,
    STATE(92), 1,
      sym_select_fetch,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [1718] = 15,
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
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(51), 1,
      sym_select_order_by,
    STATE(61), 1,
      sym_select_limit,
    STATE(89), 1,
      sym_select_start,
    STATE(90), 1,
      sym_select_fetch,
    STATE(124), 1,
      sym_select_timeout,
    STATE(179), 1,
      sym_select_explain,
  [1764] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
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
    STATE(52), 1,
      sym_select_order_by,
    STATE(60), 1,
      sym_select_limit,
    STATE(75), 1,
      sym_select_start,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [1810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(65), 4,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
      sym_keyword_group_by,
    ACTIONS(67), 8,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_keyword_with,
      sym_keyword_where,
      sym_keyword_split,
  [1836] = 15,
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
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(43), 1,
      sym_select_order_by,
    STATE(68), 1,
      sym_select_limit,
    STATE(80), 1,
      sym_select_start,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [1882] = 15,
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
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_keyword_parallel,
    STATE(44), 1,
      sym_select_order_by,
    STATE(64), 1,
      sym_select_limit,
    STATE(78), 1,
      sym_select_start,
    STATE(99), 1,
      sym_select_fetch,
    STATE(120), 1,
      sym_select_timeout,
    STATE(186), 1,
      sym_select_explain,
  [1928] = 15,
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
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_keyword_parallel,
    STATE(50), 1,
      sym_select_order_by,
    STATE(63), 1,
      sym_select_limit,
    STATE(86), 1,
      sym_select_start,
    STATE(98), 1,
      sym_select_fetch,
    STATE(117), 1,
      sym_select_timeout,
    STATE(195), 1,
      sym_select_explain,
  [1974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(75), 4,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
      sym_keyword_group_by,
    ACTIONS(77), 8,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_keyword_with,
      sym_keyword_where,
      sym_keyword_split,
  [2000] = 15,
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
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(47), 1,
      sym_select_order_by,
    STATE(57), 1,
      sym_select_limit,
    STATE(88), 1,
      sym_select_start,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [2046] = 15,
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
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(48), 1,
      sym_select_order_by,
    STATE(62), 1,
      sym_select_limit,
    STATE(84), 1,
      sym_select_start,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [2092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_keyword_rand,
    ACTIONS(82), 2,
      anon_sym_SEMI,
      sym_keyword_start_at,
    ACTIONS(88), 2,
      sym_keyword_collate,
      sym_keyword_numeric,
    ACTIONS(90), 2,
      sym_keyword_asc,
      sym_keyword_desc,
    ACTIONS(84), 6,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_identifier,
  [2119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(75), 4,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
      sym_keyword_group_by,
    ACTIONS(77), 7,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_keyword_where,
      sym_keyword_split,
  [2144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(95), 4,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
      sym_keyword_group_by,
    ACTIONS(97), 7,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_keyword_where,
      sym_keyword_split,
  [2169] = 13,
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
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(72), 1,
      sym_select_limit,
    STATE(77), 1,
      sym_select_start,
    STATE(92), 1,
      sym_select_fetch,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [2209] = 13,
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
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_keyword_parallel,
    STATE(63), 1,
      sym_select_limit,
    STATE(86), 1,
      sym_select_start,
    STATE(98), 1,
      sym_select_fetch,
    STATE(117), 1,
      sym_select_timeout,
    STATE(195), 1,
      sym_select_explain,
  [2249] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
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
    STATE(60), 1,
      sym_select_limit,
    STATE(75), 1,
      sym_select_start,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [2289] = 13,
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
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(62), 1,
      sym_select_limit,
    STATE(84), 1,
      sym_select_start,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [2329] = 13,
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
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(59), 1,
      sym_select_limit,
    STATE(85), 1,
      sym_select_start,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [2369] = 13,
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
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(57), 1,
      sym_select_limit,
    STATE(88), 1,
      sym_select_start,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [2409] = 13,
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
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(61), 1,
      sym_select_limit,
    STATE(89), 1,
      sym_select_start,
    STATE(90), 1,
      sym_select_fetch,
    STATE(124), 1,
      sym_select_timeout,
    STATE(179), 1,
      sym_select_explain,
  [2449] = 13,
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
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      sym_keyword_parallel,
    STATE(69), 1,
      sym_select_limit,
    STATE(82), 1,
      sym_select_start,
    STATE(96), 1,
      sym_select_fetch,
    STATE(116), 1,
      sym_select_timeout,
    STATE(173), 1,
      sym_select_explain,
  [2489] = 13,
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
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_keyword_parallel,
    STATE(64), 1,
      sym_select_limit,
    STATE(78), 1,
      sym_select_start,
    STATE(99), 1,
      sym_select_fetch,
    STATE(120), 1,
      sym_select_timeout,
    STATE(186), 1,
      sym_select_explain,
  [2529] = 13,
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
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(68), 1,
      sym_select_limit,
    STATE(80), 1,
      sym_select_start,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [2569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(75), 4,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
      sym_keyword_group_by,
    ACTIONS(77), 5,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
  [2592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(108), 4,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
      sym_keyword_group_by,
    ACTIONS(110), 5,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
  [2615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 11,
      anon_sym_SEMI,
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
  [2632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(116), 4,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
      sym_keyword_group_by,
    ACTIONS(118), 5,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
  [2655] = 11,
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
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(85), 1,
      sym_select_start,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [2689] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      sym_keyword_start_at,
    STATE(58), 2,
      sym_order_criteria,
      aux_sym_select_order_by_repeat1,
    ACTIONS(122), 5,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
  [2711] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
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
    STATE(75), 1,
      sym_select_start,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [2745] = 11,
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
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(80), 1,
      sym_select_start,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [2779] = 11,
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
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_keyword_parallel,
    STATE(78), 1,
      sym_select_start,
    STATE(99), 1,
      sym_select_fetch,
    STATE(120), 1,
      sym_select_timeout,
    STATE(186), 1,
      sym_select_explain,
  [2813] = 11,
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
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(88), 1,
      sym_select_start,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [2847] = 11,
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
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      sym_keyword_parallel,
    STATE(82), 1,
      sym_select_start,
    STATE(96), 1,
      sym_select_fetch,
    STATE(116), 1,
      sym_select_timeout,
    STATE(173), 1,
      sym_select_explain,
  [2881] = 11,
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
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_keyword_parallel,
    STATE(86), 1,
      sym_select_start,
    STATE(98), 1,
      sym_select_fetch,
    STATE(117), 1,
      sym_select_timeout,
    STATE(195), 1,
      sym_select_explain,
  [2915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_SEMI,
      sym_keyword_start_at,
    ACTIONS(131), 2,
      sym_keyword_asc,
      sym_keyword_desc,
    ACTIONS(129), 6,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_identifier,
  [2935] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(75), 3,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
    ACTIONS(77), 5,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 10,
      anon_sym_SEMI,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
      sym_keyword_limit,
      sym_keyword_order_by,
      sym_keyword_split,
      sym_keyword_group_by,
  [2973] = 11,
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
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(77), 1,
      sym_select_start,
    STATE(92), 1,
      sym_select_fetch,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [3007] = 11,
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
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      sym_keyword_parallel,
    STATE(79), 1,
      sym_select_start,
    STATE(103), 1,
      sym_select_fetch,
    STATE(115), 1,
      sym_select_timeout,
    STATE(178), 1,
      sym_select_explain,
  [3041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(142), 3,
      anon_sym_SEMI,
      sym_keyword_start_at,
      sym_keyword_order_by,
    ACTIONS(144), 5,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
  [3063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(148), 2,
      anon_sym_SEMI,
      sym_keyword_start_at,
    STATE(58), 2,
      sym_order_criteria,
      aux_sym_select_order_by_repeat1,
    ACTIONS(150), 5,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
  [3085] = 11,
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
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(89), 1,
      sym_select_start,
    STATE(90), 1,
      sym_select_fetch,
    STATE(124), 1,
      sym_select_timeout,
    STATE(179), 1,
      sym_select_explain,
  [3119] = 11,
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
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(84), 1,
      sym_select_start,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [3153] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_keyword_from,
    ACTIONS(156), 1,
      sym_keyword_value,
    ACTIONS(158), 1,
      sym_keyword_as,
    ACTIONS(160), 1,
      sym_keyword_omit,
    ACTIONS(162), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(111), 1,
      sym_select_fields,
    STATE(160), 1,
      sym_select_alias,
    STATE(180), 1,
      sym_select_omit,
  [3184] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(106), 1,
      sym_select_fetch,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [3212] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_keyword_as,
    ACTIONS(160), 1,
      sym_keyword_omit,
    ACTIONS(162), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym_keyword_from,
    STATE(110), 1,
      sym_select_fields,
    STATE(134), 1,
      sym_select_alias,
    STATE(194), 1,
      sym_select_omit,
  [3240] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(90), 1,
      sym_select_fetch,
    STATE(124), 1,
      sym_select_timeout,
    STATE(179), 1,
      sym_select_explain,
  [3268] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_keyword_parallel,
    STATE(98), 1,
      sym_select_fetch,
    STATE(117), 1,
      sym_select_timeout,
    STATE(195), 1,
      sym_select_explain,
  [3296] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym_keyword_parallel,
    STATE(105), 1,
      sym_select_fetch,
    STATE(114), 1,
      sym_select_timeout,
    STATE(183), 1,
      sym_select_explain,
  [3324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(92), 1,
      sym_select_fetch,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [3352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      sym_keyword_start_at,
    ACTIONS(174), 6,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_identifier,
  [3368] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      sym_keyword_parallel,
    STATE(103), 1,
      sym_select_fetch,
    STATE(115), 1,
      sym_select_timeout,
    STATE(178), 1,
      sym_select_explain,
  [3396] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(94), 1,
      sym_select_fetch,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [3424] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(91), 1,
      sym_select_fetch,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [3452] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    STATE(97), 1,
      sym_select_fetch,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [3480] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      sym_keyword_parallel,
    STATE(96), 1,
      sym_select_fetch,
    STATE(116), 1,
      sym_select_timeout,
    STATE(173), 1,
      sym_select_explain,
  [3508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_SEMI,
      sym_keyword_start_at,
    ACTIONS(129), 6,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_limit,
      sym_identifier,
  [3524] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(102), 1,
      sym_select_fetch,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [3552] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(17), 1,
      sym_keyword_fetch,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_keyword_parallel,
    STATE(99), 1,
      sym_select_fetch,
    STATE(120), 1,
      sym_select_timeout,
    STATE(186), 1,
      sym_select_explain,
  [3580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_keyword_parallel,
    STATE(120), 1,
      sym_select_timeout,
    STATE(186), 1,
      sym_select_explain,
  [3602] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(118), 1,
      sym_select_timeout,
    STATE(188), 1,
      sym_select_explain,
  [3624] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(124), 1,
      sym_select_timeout,
    STATE(179), 1,
      sym_select_explain,
  [3646] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(123), 1,
      sym_select_timeout,
    STATE(174), 1,
      sym_select_explain,
  [3668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(126), 1,
      sym_select_timeout,
    STATE(193), 1,
      sym_select_explain,
  [3690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(77), 3,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
  [3708] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      sym_keyword_parallel,
    STATE(115), 1,
      sym_select_timeout,
    STATE(178), 1,
      sym_select_explain,
  [3730] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(125), 1,
      sym_select_timeout,
    STATE(196), 1,
      sym_select_explain,
  [3752] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      sym_keyword_parallel,
    STATE(116), 1,
      sym_select_timeout,
    STATE(173), 1,
      sym_select_explain,
  [3774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_keyword_parallel,
    STATE(117), 1,
      sym_select_timeout,
    STATE(195), 1,
      sym_select_explain,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 6,
      anon_sym_SEMI,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
  [3808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 6,
      anon_sym_SEMI,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
      sym_keyword_start_at,
  [3820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    STATE(122), 1,
      sym_select_timeout,
    STATE(171), 1,
      sym_select_explain,
  [3842] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym_keyword_parallel,
    STATE(114), 1,
      sym_select_timeout,
    STATE(183), 1,
      sym_select_explain,
  [3864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_select_omit_repeat1,
    ACTIONS(185), 3,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
  [3882] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      sym_keyword_parallel,
    STATE(113), 1,
      sym_select_timeout,
    STATE(187), 1,
      sym_select_explain,
  [3904] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(15), 1,
      sym_keyword_timeout,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(128), 1,
      sym_select_timeout,
    STATE(189), 1,
      sym_select_explain,
  [3926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      anon_sym_SEMI,
      sym_keyword_explain,
      sym_keyword_parallel,
      sym_keyword_timeout,
      sym_keyword_fetch,
  [3937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym_keyword_select,
    STATE(172), 1,
      sym_select_statement,
    STATE(108), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [3954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_keyword_select,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(172), 1,
      sym_select_statement,
    STATE(108), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [3971] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_keyword_from,
    ACTIONS(204), 1,
      sym_keyword_as,
    ACTIONS(206), 1,
      sym_keyword_omit,
    STATE(156), 1,
      sym_select_alias,
    STATE(184), 1,
      sym_select_omit,
  [3990] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_keyword_as,
    ACTIONS(206), 1,
      sym_keyword_omit,
    ACTIONS(208), 1,
      sym_keyword_from,
    STATE(134), 1,
      sym_select_alias,
    STATE(194), 1,
      sym_select_omit,
  [4009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_keyword_parallel,
    STATE(174), 1,
      sym_select_explain,
  [4025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_keyword_parallel,
    STATE(197), 1,
      sym_select_explain,
  [4041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      sym_keyword_parallel,
    STATE(187), 1,
      sym_select_explain,
  [4057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym_keyword_parallel,
    STATE(183), 1,
      sym_select_explain,
  [4073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      sym_keyword_parallel,
    STATE(178), 1,
      sym_select_explain,
  [4089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      sym_keyword_parallel,
    STATE(173), 1,
      sym_select_explain,
  [4105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(13), 1,
      sym_keyword_parallel,
    STATE(171), 1,
      sym_select_explain,
  [4121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword_only,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(2), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_keyword_parallel,
    STATE(195), 1,
      sym_select_explain,
  [4153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      sym_keyword_only,
    STATE(4), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_keyword_parallel,
    STATE(196), 1,
      sym_select_explain,
  [4185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_keyword_parallel,
    STATE(193), 1,
      sym_select_explain,
  [4201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_keyword_parallel,
    STATE(186), 1,
      sym_select_explain,
  [4217] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_keyword_parallel,
    STATE(189), 1,
      sym_select_explain,
  [4233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_keyword_parallel,
    STATE(188), 1,
      sym_select_explain,
  [4249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_keyword_only,
    STATE(7), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_keyword_parallel,
    STATE(179), 1,
      sym_select_explain,
  [4281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(222), 1,
      sym_keyword_only,
    STATE(3), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym_keyword_only,
    STATE(5), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_select_explain,
  [4326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(4), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym_keyword_omit,
  [4348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_keyword_from,
    ACTIONS(206), 1,
      sym_keyword_omit,
    STATE(184), 1,
      sym_select_omit,
  [4361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      sym_select_explain,
  [4374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_keyword_from,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(136), 1,
      aux_sym_select_omit_repeat1,
  [4387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    STATE(188), 1,
      sym_select_explain,
  [4400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      sym_select_explain,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      sym_keyword_from,
      sym_keyword_as,
      sym_keyword_omit,
  [4422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(5), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      sym_select_explain,
  [4448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    STATE(179), 1,
      sym_select_explain,
  [4461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_keyword_from,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(136), 1,
      aux_sym_select_omit_repeat1,
  [4474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(6), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(187), 1,
      sym_select_explain,
  [4500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      sym_keyword_explain,
      sym_keyword_parallel,
  [4509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_select_explain,
  [4522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      sym_select_explain,
  [4535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      sym_select_explain,
  [4548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_select_explain,
  [4561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_explain,
    STATE(171), 1,
      sym_select_explain,
  [4574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(71), 2,
      sym_order_criteria,
      aux_sym_select_order_by_repeat1,
  [4585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(7), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      sym_select_explain,
  [4611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_keyword_at,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_select_omit_repeat1,
  [4624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_keyword_omit,
    ACTIONS(249), 1,
      sym_keyword_from,
    STATE(191), 1,
      sym_select_omit,
  [4637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_select_explain,
  [4650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_explain,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      sym_select_explain,
  [4663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(2), 1,
      sym_select_targets,
    STATE(33), 1,
      aux_sym_select_omit_repeat1,
  [4676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_keyword_omit,
    ACTIONS(208), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_select_omit,
  [4689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_select_omit_repeat1,
  [4699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_keyword_by,
    ACTIONS(255), 1,
      sym_number,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [4717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(143), 1,
      aux_sym_select_omit_repeat1,
  [4727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_keyword_from,
      sym_keyword_omit,
  [4735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_select_omit_repeat1,
  [4745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym_select_omit_repeat1,
  [4755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      sym_keyword_full,
  [4765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_keyword_index,
    ACTIONS(273), 1,
      sym_keyword_no_index,
  [4775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(104), 1,
      aux_sym_select_omit_repeat1,
  [4785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_SEMI,
  [4792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [4799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_SEMI,
  [4806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SEMI,
  [4813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_SEMI,
  [4820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_number,
  [4827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_number,
  [4834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_SEMI,
  [4841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_SEMI,
  [4848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_keyword_from,
  [4855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [4862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_SEMI,
  [4869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [4876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_keyword_from,
  [4883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_number,
  [4890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SEMI,
  [4897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SEMI,
  [4904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
  [4911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SEMI,
  [4918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
  [4925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_keyword_from,
  [4932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_SEMI,
  [4939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SEMI,
  [4946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_keyword_from,
  [4953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [4960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SEMI,
  [4967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 350,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 484,
  [SMALL_STATE(10)] = 548,
  [SMALL_STATE(11)] = 612,
  [SMALL_STATE(12)] = 676,
  [SMALL_STATE(13)] = 740,
  [SMALL_STATE(14)] = 804,
  [SMALL_STATE(15)] = 862,
  [SMALL_STATE(16)] = 920,
  [SMALL_STATE(17)] = 978,
  [SMALL_STATE(18)] = 1036,
  [SMALL_STATE(19)] = 1094,
  [SMALL_STATE(20)] = 1152,
  [SMALL_STATE(21)] = 1210,
  [SMALL_STATE(22)] = 1262,
  [SMALL_STATE(23)] = 1314,
  [SMALL_STATE(24)] = 1366,
  [SMALL_STATE(25)] = 1418,
  [SMALL_STATE(26)] = 1470,
  [SMALL_STATE(27)] = 1522,
  [SMALL_STATE(28)] = 1574,
  [SMALL_STATE(29)] = 1626,
  [SMALL_STATE(30)] = 1672,
  [SMALL_STATE(31)] = 1718,
  [SMALL_STATE(32)] = 1764,
  [SMALL_STATE(33)] = 1810,
  [SMALL_STATE(34)] = 1836,
  [SMALL_STATE(35)] = 1882,
  [SMALL_STATE(36)] = 1928,
  [SMALL_STATE(37)] = 1974,
  [SMALL_STATE(38)] = 2000,
  [SMALL_STATE(39)] = 2046,
  [SMALL_STATE(40)] = 2092,
  [SMALL_STATE(41)] = 2119,
  [SMALL_STATE(42)] = 2144,
  [SMALL_STATE(43)] = 2169,
  [SMALL_STATE(44)] = 2209,
  [SMALL_STATE(45)] = 2249,
  [SMALL_STATE(46)] = 2289,
  [SMALL_STATE(47)] = 2329,
  [SMALL_STATE(48)] = 2369,
  [SMALL_STATE(49)] = 2409,
  [SMALL_STATE(50)] = 2449,
  [SMALL_STATE(51)] = 2489,
  [SMALL_STATE(52)] = 2529,
  [SMALL_STATE(53)] = 2569,
  [SMALL_STATE(54)] = 2592,
  [SMALL_STATE(55)] = 2615,
  [SMALL_STATE(56)] = 2632,
  [SMALL_STATE(57)] = 2655,
  [SMALL_STATE(58)] = 2689,
  [SMALL_STATE(59)] = 2711,
  [SMALL_STATE(60)] = 2745,
  [SMALL_STATE(61)] = 2779,
  [SMALL_STATE(62)] = 2813,
  [SMALL_STATE(63)] = 2847,
  [SMALL_STATE(64)] = 2881,
  [SMALL_STATE(65)] = 2915,
  [SMALL_STATE(66)] = 2935,
  [SMALL_STATE(67)] = 2957,
  [SMALL_STATE(68)] = 2973,
  [SMALL_STATE(69)] = 3007,
  [SMALL_STATE(70)] = 3041,
  [SMALL_STATE(71)] = 3063,
  [SMALL_STATE(72)] = 3085,
  [SMALL_STATE(73)] = 3119,
  [SMALL_STATE(74)] = 3153,
  [SMALL_STATE(75)] = 3184,
  [SMALL_STATE(76)] = 3212,
  [SMALL_STATE(77)] = 3240,
  [SMALL_STATE(78)] = 3268,
  [SMALL_STATE(79)] = 3296,
  [SMALL_STATE(80)] = 3324,
  [SMALL_STATE(81)] = 3352,
  [SMALL_STATE(82)] = 3368,
  [SMALL_STATE(83)] = 3396,
  [SMALL_STATE(84)] = 3424,
  [SMALL_STATE(85)] = 3452,
  [SMALL_STATE(86)] = 3480,
  [SMALL_STATE(87)] = 3508,
  [SMALL_STATE(88)] = 3524,
  [SMALL_STATE(89)] = 3552,
  [SMALL_STATE(90)] = 3580,
  [SMALL_STATE(91)] = 3602,
  [SMALL_STATE(92)] = 3624,
  [SMALL_STATE(93)] = 3646,
  [SMALL_STATE(94)] = 3668,
  [SMALL_STATE(95)] = 3690,
  [SMALL_STATE(96)] = 3708,
  [SMALL_STATE(97)] = 3730,
  [SMALL_STATE(98)] = 3752,
  [SMALL_STATE(99)] = 3774,
  [SMALL_STATE(100)] = 3796,
  [SMALL_STATE(101)] = 3808,
  [SMALL_STATE(102)] = 3820,
  [SMALL_STATE(103)] = 3842,
  [SMALL_STATE(104)] = 3864,
  [SMALL_STATE(105)] = 3882,
  [SMALL_STATE(106)] = 3904,
  [SMALL_STATE(107)] = 3926,
  [SMALL_STATE(108)] = 3937,
  [SMALL_STATE(109)] = 3954,
  [SMALL_STATE(110)] = 3971,
  [SMALL_STATE(111)] = 3990,
  [SMALL_STATE(112)] = 4009,
  [SMALL_STATE(113)] = 4025,
  [SMALL_STATE(114)] = 4041,
  [SMALL_STATE(115)] = 4057,
  [SMALL_STATE(116)] = 4073,
  [SMALL_STATE(117)] = 4089,
  [SMALL_STATE(118)] = 4105,
  [SMALL_STATE(119)] = 4121,
  [SMALL_STATE(120)] = 4137,
  [SMALL_STATE(121)] = 4153,
  [SMALL_STATE(122)] = 4169,
  [SMALL_STATE(123)] = 4185,
  [SMALL_STATE(124)] = 4201,
  [SMALL_STATE(125)] = 4217,
  [SMALL_STATE(126)] = 4233,
  [SMALL_STATE(127)] = 4249,
  [SMALL_STATE(128)] = 4265,
  [SMALL_STATE(129)] = 4281,
  [SMALL_STATE(130)] = 4297,
  [SMALL_STATE(131)] = 4313,
  [SMALL_STATE(132)] = 4326,
  [SMALL_STATE(133)] = 4339,
  [SMALL_STATE(134)] = 4348,
  [SMALL_STATE(135)] = 4361,
  [SMALL_STATE(136)] = 4374,
  [SMALL_STATE(137)] = 4387,
  [SMALL_STATE(138)] = 4400,
  [SMALL_STATE(139)] = 4413,
  [SMALL_STATE(140)] = 4422,
  [SMALL_STATE(141)] = 4435,
  [SMALL_STATE(142)] = 4448,
  [SMALL_STATE(143)] = 4461,
  [SMALL_STATE(144)] = 4474,
  [SMALL_STATE(145)] = 4487,
  [SMALL_STATE(146)] = 4500,
  [SMALL_STATE(147)] = 4509,
  [SMALL_STATE(148)] = 4522,
  [SMALL_STATE(149)] = 4535,
  [SMALL_STATE(150)] = 4548,
  [SMALL_STATE(151)] = 4561,
  [SMALL_STATE(152)] = 4574,
  [SMALL_STATE(153)] = 4585,
  [SMALL_STATE(154)] = 4598,
  [SMALL_STATE(155)] = 4611,
  [SMALL_STATE(156)] = 4624,
  [SMALL_STATE(157)] = 4637,
  [SMALL_STATE(158)] = 4650,
  [SMALL_STATE(159)] = 4663,
  [SMALL_STATE(160)] = 4676,
  [SMALL_STATE(161)] = 4689,
  [SMALL_STATE(162)] = 4699,
  [SMALL_STATE(163)] = 4709,
  [SMALL_STATE(164)] = 4717,
  [SMALL_STATE(165)] = 4727,
  [SMALL_STATE(166)] = 4735,
  [SMALL_STATE(167)] = 4745,
  [SMALL_STATE(168)] = 4755,
  [SMALL_STATE(169)] = 4765,
  [SMALL_STATE(170)] = 4775,
  [SMALL_STATE(171)] = 4785,
  [SMALL_STATE(172)] = 4792,
  [SMALL_STATE(173)] = 4799,
  [SMALL_STATE(174)] = 4806,
  [SMALL_STATE(175)] = 4813,
  [SMALL_STATE(176)] = 4820,
  [SMALL_STATE(177)] = 4827,
  [SMALL_STATE(178)] = 4834,
  [SMALL_STATE(179)] = 4841,
  [SMALL_STATE(180)] = 4848,
  [SMALL_STATE(181)] = 4855,
  [SMALL_STATE(182)] = 4862,
  [SMALL_STATE(183)] = 4869,
  [SMALL_STATE(184)] = 4876,
  [SMALL_STATE(185)] = 4883,
  [SMALL_STATE(186)] = 4890,
  [SMALL_STATE(187)] = 4897,
  [SMALL_STATE(188)] = 4904,
  [SMALL_STATE(189)] = 4911,
  [SMALL_STATE(190)] = 4918,
  [SMALL_STATE(191)] = 4925,
  [SMALL_STATE(192)] = 4932,
  [SMALL_STATE(193)] = 4939,
  [SMALL_STATE(194)] = 4946,
  [SMALL_STATE(195)] = 4953,
  [SMALL_STATE(196)] = 4960,
  [SMALL_STATE(197)] = 4967,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_targets, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_targets, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_omit_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_omit_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_select_omit_repeat1, 2), SHIFT_REPEAT(37),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_criteria, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_criteria, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_select_omit_repeat1, 2), SHIFT_REPEAT(41),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_with, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_with, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 13),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_select_omit_repeat1, 2), SHIFT_REPEAT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_split, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_split, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_with, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_split, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_split, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_order_by_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_order_by_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_select_order_by_repeat1, 2), SHIFT_REPEAT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_criteria, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_criteria, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_select_omit_repeat1, 2), SHIFT_REPEAT(66),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_where, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_group_by, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_group_by, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_order_by, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_order_by, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 15),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_criteria, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_criteria, 3),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_select_omit_repeat1, 2), SHIFT_REPEAT(95),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_limit, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_limit, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_fetch, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_fetch, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_start, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 17),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_fields, 1, .production_id = 1),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_select_omit_repeat1, 2), SHIFT_REPEAT(136),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 18),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_fields, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_omit, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_timeout, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_alias, 2, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_explain, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_explain, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 19),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
