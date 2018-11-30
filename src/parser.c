#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 73
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_COMMENT = 1,
  sym_BEGIN = 2,
  sym_END = 3,
  sym_COMMA = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_BSLASH = 6,
  aux_sym_SLASH_LBRACK_DQUOTE_BSLASH_BSLASH_BSLASH_SLASHbfnrt_RBRACK_SLASH = 7,
  aux_sym_SLASHu_LBRACK0_DASH9a_DASHzA_DASHZ_RBRACK_LBRACE4_RBRACE_SLASH = 8,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH = 9,
  sym_NUMBER = 10,
  sym_IDENTIFIER = 11,
  anon_sym_CR_LF = 12,
  anon_sym_CR = 13,
  anon_sym_LF = 14,
  sym_file = 15,
  sym_statements = 16,
  sym_statement = 17,
  sym_line = 18,
  sym_instruction = 19,
  sym_block = 20,
  sym_begin = 21,
  sym_end = 22,
  sym_arguments = 23,
  sym_argument = 24,
  sym_argumentNumber = 25,
  sym_argumentString = 26,
  sym_comment = 27,
  sym_identifier = 28,
  sym_STRING = 29,
  sym_NL = 30,
  aux_sym_statements_repeat1 = 31,
  aux_sym_arguments_repeat1 = 32,
  aux_sym_STRING_repeat1 = 33,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_COMMENT] = "COMMENT",
  [sym_BEGIN] = "BEGIN",
  [sym_END] = "END",
  [sym_COMMA] = "COMMA",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_SLASH_LBRACK_DQUOTE_BSLASH_BSLASH_BSLASH_SLASHbfnrt_RBRACK_SLASH] = "/[\"\\\\\\/bfnrt]/",
  [aux_sym_SLASHu_LBRACK0_DASH9a_DASHzA_DASHZ_RBRACK_LBRACE4_RBRACE_SLASH] = "/u[0-9a-zA-Z]{4}/",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH] = "/[^\"\\\\\\r\\n]/",
  [sym_NUMBER] = "NUMBER",
  [sym_IDENTIFIER] = "IDENTIFIER",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [sym_file] = "file",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_line] = "line",
  [sym_instruction] = "instruction",
  [sym_block] = "block",
  [sym_begin] = "begin",
  [sym_end] = "end",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_argumentNumber] = "argumentNumber",
  [sym_argumentString] = "argumentString",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_STRING] = "STRING",
  [sym_NL] = "NL",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_STRING_repeat1] = "STRING_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_BEGIN] = {
    .visible = true,
    .named = true,
  },
  [sym_END] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMA] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_DQUOTE_BSLASH_BSLASH_BSLASH_SLASHbfnrt_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHu_LBRACK0_DASH9a_DASHzA_DASHZ_RBRACK_LBRACE4_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [sym_IDENTIFIER] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_argumentNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_argumentString] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_NL] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_STRING_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        SKIP(2);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(42);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(28);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'I')
        ADVANCE(20);
      if (lookahead == 'N')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        SKIP(2);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(28);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'I')
        ADVANCE(20);
      if (lookahead == 'N')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 7:
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == 'I')
        ADVANCE(20);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == 'E')
        ADVANCE(9);
      if (lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '0')
        ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '0')
        ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_NUMBER);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'E')
        ADVANCE(9);
      if (lookahead == 'b')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(9);
      if (lookahead == 'o')
        ADVANCE(16);
      if (lookahead == 'x')
        ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(15);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'f')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'i')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'i')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 't')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'y')
        ADVANCE(11);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'E')
        ADVANCE(9);
      if (lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 'a')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'N')
        ADVANCE(11);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 33:
      if (lookahead == 'n')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'd')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_END);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASHu_LBRACK0_DASH9a_DASHzA_DASHZ_RBRACK_LBRACE4_RBRACE_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_DQUOTE_BSLASH_BSLASH_BSLASH_SLASHbfnrt_RBRACK_SLASH);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(42);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(28);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'I')
        ADVANCE(20);
      if (lookahead == 'N')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        SKIP(44);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(51);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'b')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        SKIP(44);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'b')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'e')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'g')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'i')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_BEGIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(51);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'b')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '\t')
        SKIP(53);
      if (lookahead == ' ')
        SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == '\t')
        SKIP(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == ' ')
        SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == '\t')
        SKIP(56);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(57);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'I')
        ADVANCE(20);
      if (lookahead == 'N')
        ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == '\t')
        SKIP(56);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'I')
        ADVANCE(20);
      if (lookahead == 'N')
        ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(57);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'I')
        ADVANCE(20);
      if (lookahead == 'N')
        ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        SKIP(59);
      if (lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '\t')
        SKIP(62);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(66);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'b')
        ADVANCE(45);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == '\t')
        SKIP(62);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'b')
        ADVANCE(45);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'd')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_END);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(66);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == 'b')
        ADVANCE(45);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == '\t')
        ADVANCE(68);
      if (lookahead == ' ')
        ADVANCE(68);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 69:
      if (lookahead == '\t')
        SKIP(70);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(71);
      if (lookahead == ',')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == '\t')
        SKIP(70);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        SKIP(71);
      if (lookahead == ',')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(29);
      END_STATE();
    case 72:
      if (lookahead == '\t')
        SKIP(73);
      if (lookahead == ' ')
        SKIP(74);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == '\"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 73:
      if (lookahead == '\t')
        SKIP(73);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == '\"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == ' ')
        SKIP(74);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == '\"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 69},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 43},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 69},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 69},
  [69] = {.lex_state = 69},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 61},
  [72] = {.lex_state = 61},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_COMMENT] = ACTIONS(1),
    [sym_END] = ACTIONS(1),
    [sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_DQUOTE_BSLASH_BSLASH_BSLASH_SLASHbfnrt_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASHu_LBRACK0_DASH9a_DASHzA_DASHZ_RBRACK_LBRACE4_RBRACE_SLASH] = ACTIONS(1),
    [sym_NUMBER] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(6),
    [sym_statements] = STATE(7),
    [sym_statement] = STATE(13),
    [sym_line] = STATE(8),
    [sym_instruction] = STATE(8),
    [sym_block] = STATE(8),
    [sym_begin] = STATE(9),
    [sym_comment] = STATE(10),
    [sym_identifier] = STATE(11),
    [sym_NL] = STATE(12),
    [aux_sym_statements_repeat1] = STATE(13),
    [sym_COMMENT] = ACTIONS(5),
    [sym_BEGIN] = ACTIONS(7),
    [sym_IDENTIFIER] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [2] = {
    [anon_sym_CR_LF] = ACTIONS(15),
    [anon_sym_CR] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(15),
  },
  [3] = {
    [sym_identifier] = STATE(14),
    [sym_IDENTIFIER] = ACTIONS(19),
  },
  [4] = {
    [sym_COMMENT] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_NUMBER] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(21),
    [anon_sym_CR] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_COMMENT] = ACTIONS(25),
    [sym_BEGIN] = ACTIONS(27),
    [sym_IDENTIFIER] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(25),
    [anon_sym_CR] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_COMMENT] = ACTIONS(33),
    [sym_BEGIN] = ACTIONS(35),
    [sym_IDENTIFIER] = ACTIONS(35),
    [anon_sym_CR_LF] = ACTIONS(33),
    [anon_sym_CR] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(33),
  },
  [9] = {
    [sym_statements] = STATE(17),
    [sym_statement] = STATE(24),
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(19),
    [sym_end] = STATE(20),
    [sym_comment] = STATE(21),
    [sym_identifier] = STATE(22),
    [sym_NL] = STATE(23),
    [aux_sym_statements_repeat1] = STATE(24),
    [sym_COMMENT] = ACTIONS(5),
    [sym_BEGIN] = ACTIONS(7),
    [sym_END] = ACTIONS(37),
    [sym_IDENTIFIER] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [10] = {
    [sym_NL] = STATE(25),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [11] = {
    [sym_arguments] = STATE(28),
    [sym_argument] = STATE(29),
    [sym_argumentNumber] = STATE(30),
    [sym_argumentString] = STATE(30),
    [sym_comment] = STATE(31),
    [sym_STRING] = STATE(32),
    [sym_NL] = STATE(33),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_NUMBER] = ACTIONS(45),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_COMMENT] = ACTIONS(47),
    [sym_BEGIN] = ACTIONS(49),
    [sym_IDENTIFIER] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(47),
  },
  [13] = {
    [sym_statement] = STATE(34),
    [sym_line] = STATE(8),
    [sym_instruction] = STATE(8),
    [sym_block] = STATE(8),
    [sym_begin] = STATE(9),
    [sym_comment] = STATE(10),
    [sym_identifier] = STATE(11),
    [sym_NL] = STATE(12),
    [aux_sym_statements_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_COMMENT] = ACTIONS(5),
    [sym_BEGIN] = ACTIONS(7),
    [sym_IDENTIFIER] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [14] = {
    [sym_arguments] = STATE(35),
    [sym_argument] = STATE(29),
    [sym_argumentNumber] = STATE(30),
    [sym_argumentString] = STATE(30),
    [sym_comment] = STATE(36),
    [sym_STRING] = STATE(32),
    [sym_NL] = STATE(37),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_NUMBER] = ACTIONS(45),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [15] = {
    [sym_comment] = STATE(38),
    [sym_NL] = STATE(39),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [16] = {
    [sym_COMMENT] = ACTIONS(25),
    [sym_BEGIN] = ACTIONS(27),
    [sym_END] = ACTIONS(27),
    [sym_IDENTIFIER] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(25),
    [anon_sym_CR] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(25),
  },
  [17] = {
    [sym_end] = STATE(40),
    [sym_END] = ACTIONS(53),
  },
  [18] = {
    [sym_COMMENT] = ACTIONS(33),
    [sym_BEGIN] = ACTIONS(35),
    [sym_END] = ACTIONS(35),
    [sym_IDENTIFIER] = ACTIONS(35),
    [anon_sym_CR_LF] = ACTIONS(33),
    [anon_sym_CR] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(33),
  },
  [19] = {
    [sym_statements] = STATE(42),
    [sym_statement] = STATE(24),
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(19),
    [sym_end] = STATE(43),
    [sym_comment] = STATE(21),
    [sym_identifier] = STATE(22),
    [sym_NL] = STATE(23),
    [aux_sym_statements_repeat1] = STATE(24),
    [sym_COMMENT] = ACTIONS(5),
    [sym_BEGIN] = ACTIONS(7),
    [sym_END] = ACTIONS(55),
    [sym_IDENTIFIER] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_COMMENT] = ACTIONS(57),
    [sym_BEGIN] = ACTIONS(59),
    [sym_IDENTIFIER] = ACTIONS(59),
    [anon_sym_CR_LF] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(57),
  },
  [21] = {
    [sym_NL] = STATE(44),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [22] = {
    [sym_arguments] = STATE(45),
    [sym_argument] = STATE(29),
    [sym_argumentNumber] = STATE(30),
    [sym_argumentString] = STATE(30),
    [sym_comment] = STATE(46),
    [sym_STRING] = STATE(32),
    [sym_NL] = STATE(47),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_NUMBER] = ACTIONS(45),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [23] = {
    [sym_COMMENT] = ACTIONS(47),
    [sym_BEGIN] = ACTIONS(49),
    [sym_END] = ACTIONS(49),
    [sym_IDENTIFIER] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(47),
  },
  [24] = {
    [sym_statement] = STATE(48),
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(19),
    [sym_comment] = STATE(21),
    [sym_identifier] = STATE(22),
    [sym_NL] = STATE(23),
    [aux_sym_statements_repeat1] = STATE(48),
    [sym_COMMENT] = ACTIONS(5),
    [sym_BEGIN] = ACTIONS(7),
    [sym_END] = ACTIONS(61),
    [sym_IDENTIFIER] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_COMMENT] = ACTIONS(63),
    [sym_BEGIN] = ACTIONS(65),
    [sym_IDENTIFIER] = ACTIONS(65),
    [anon_sym_CR_LF] = ACTIONS(63),
    [anon_sym_CR] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(63),
  },
  [26] = {
    [aux_sym_STRING_repeat1] = STATE(51),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(69),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(71),
  },
  [27] = {
    [sym_COMMENT] = ACTIONS(73),
    [sym_COMMA] = ACTIONS(73),
    [anon_sym_CR_LF] = ACTIONS(73),
    [anon_sym_CR] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(73),
  },
  [28] = {
    [sym_comment] = STATE(52),
    [sym_NL] = STATE(53),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [29] = {
    [aux_sym_arguments_repeat1] = STATE(55),
    [sym_COMMENT] = ACTIONS(77),
    [sym_COMMA] = ACTIONS(79),
    [anon_sym_CR_LF] = ACTIONS(77),
    [anon_sym_CR] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(77),
  },
  [30] = {
    [sym_COMMENT] = ACTIONS(83),
    [sym_COMMA] = ACTIONS(83),
    [anon_sym_CR_LF] = ACTIONS(83),
    [anon_sym_CR] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(83),
  },
  [31] = {
    [sym_NL] = STATE(53),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [32] = {
    [sym_COMMENT] = ACTIONS(87),
    [sym_COMMA] = ACTIONS(87),
    [anon_sym_CR_LF] = ACTIONS(87),
    [anon_sym_CR] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(87),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_COMMENT] = ACTIONS(91),
    [sym_BEGIN] = ACTIONS(93),
    [sym_IDENTIFIER] = ACTIONS(93),
    [anon_sym_CR_LF] = ACTIONS(91),
    [anon_sym_CR] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(91),
  },
  [34] = {
    [sym_statement] = STATE(34),
    [sym_line] = STATE(8),
    [sym_instruction] = STATE(8),
    [sym_block] = STATE(8),
    [sym_begin] = STATE(9),
    [sym_comment] = STATE(10),
    [sym_identifier] = STATE(11),
    [sym_NL] = STATE(12),
    [aux_sym_statements_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_COMMENT] = ACTIONS(97),
    [sym_BEGIN] = ACTIONS(100),
    [sym_IDENTIFIER] = ACTIONS(103),
    [anon_sym_CR_LF] = ACTIONS(106),
    [anon_sym_CR] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(106),
  },
  [35] = {
    [sym_comment] = STATE(56),
    [sym_NL] = STATE(57),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [36] = {
    [sym_NL] = STATE(57),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [37] = {
    [sym_COMMENT] = ACTIONS(112),
    [sym_BEGIN] = ACTIONS(114),
    [sym_END] = ACTIONS(114),
    [sym_IDENTIFIER] = ACTIONS(114),
    [anon_sym_CR_LF] = ACTIONS(112),
    [anon_sym_CR] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(112),
  },
  [38] = {
    [sym_NL] = STATE(58),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_COMMENT] = ACTIONS(116),
    [sym_BEGIN] = ACTIONS(118),
    [sym_IDENTIFIER] = ACTIONS(118),
    [anon_sym_CR_LF] = ACTIONS(116),
    [anon_sym_CR] = ACTIONS(118),
    [anon_sym_LF] = ACTIONS(116),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_COMMENT] = ACTIONS(120),
    [sym_BEGIN] = ACTIONS(122),
    [sym_IDENTIFIER] = ACTIONS(122),
    [anon_sym_CR_LF] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(120),
  },
  [41] = {
    [sym_comment] = STATE(59),
    [sym_NL] = STATE(60),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [42] = {
    [sym_end] = STATE(61),
    [sym_END] = ACTIONS(124),
  },
  [43] = {
    [sym_COMMENT] = ACTIONS(57),
    [sym_BEGIN] = ACTIONS(59),
    [sym_END] = ACTIONS(59),
    [sym_IDENTIFIER] = ACTIONS(59),
    [anon_sym_CR_LF] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(57),
  },
  [44] = {
    [sym_COMMENT] = ACTIONS(63),
    [sym_BEGIN] = ACTIONS(65),
    [sym_END] = ACTIONS(65),
    [sym_IDENTIFIER] = ACTIONS(65),
    [anon_sym_CR_LF] = ACTIONS(63),
    [anon_sym_CR] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(63),
  },
  [45] = {
    [sym_comment] = STATE(62),
    [sym_NL] = STATE(63),
    [sym_COMMENT] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [46] = {
    [sym_NL] = STATE(63),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [47] = {
    [sym_COMMENT] = ACTIONS(91),
    [sym_BEGIN] = ACTIONS(93),
    [sym_END] = ACTIONS(93),
    [sym_IDENTIFIER] = ACTIONS(93),
    [anon_sym_CR_LF] = ACTIONS(91),
    [anon_sym_CR] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(91),
  },
  [48] = {
    [sym_statement] = STATE(48),
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(19),
    [sym_comment] = STATE(21),
    [sym_identifier] = STATE(22),
    [sym_NL] = STATE(23),
    [aux_sym_statements_repeat1] = STATE(48),
    [sym_COMMENT] = ACTIONS(97),
    [sym_BEGIN] = ACTIONS(100),
    [sym_END] = ACTIONS(126),
    [sym_IDENTIFIER] = ACTIONS(103),
    [anon_sym_CR_LF] = ACTIONS(128),
    [anon_sym_CR] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(128),
  },
  [49] = {
    [sym_COMMENT] = ACTIONS(134),
    [sym_COMMA] = ACTIONS(134),
    [anon_sym_CR_LF] = ACTIONS(134),
    [anon_sym_CR] = ACTIONS(136),
    [anon_sym_LF] = ACTIONS(134),
  },
  [50] = {
    [aux_sym_SLASH_LBRACK_DQUOTE_BSLASH_BSLASH_BSLASH_SLASHbfnrt_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASHu_LBRACK0_DASH9a_DASHzA_DASHZ_RBRACK_LBRACE4_RBRACE_SLASH] = ACTIONS(138),
  },
  [51] = {
    [aux_sym_STRING_repeat1] = STATE(66),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_BSLASH] = ACTIONS(69),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(142),
  },
  [52] = {
    [sym_NL] = STATE(67),
    [anon_sym_CR_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(11),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_COMMENT] = ACTIONS(144),
    [sym_BEGIN] = ACTIONS(146),
    [sym_IDENTIFIER] = ACTIONS(146),
    [anon_sym_CR_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(144),
  },
  [54] = {
    [sym_argument] = STATE(68),
    [sym_argumentNumber] = STATE(30),
    [sym_argumentString] = STATE(30),
    [sym_STRING] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_NUMBER] = ACTIONS(45),
  },
  [55] = {
    [aux_sym_arguments_repeat1] = STATE(69),
    [sym_COMMENT] = ACTIONS(148),
    [sym_COMMA] = ACTIONS(79),
    [anon_sym_CR_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_LF] = ACTIONS(148),
  },
  [56] = {
    [sym_NL] = STATE(70),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [57] = {
    [sym_COMMENT] = ACTIONS(152),
    [sym_BEGIN] = ACTIONS(154),
    [sym_END] = ACTIONS(154),
    [sym_IDENTIFIER] = ACTIONS(154),
    [anon_sym_CR_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(154),
    [anon_sym_LF] = ACTIONS(152),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_COMMENT] = ACTIONS(156),
    [sym_BEGIN] = ACTIONS(158),
    [sym_IDENTIFIER] = ACTIONS(158),
    [anon_sym_CR_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(156),
  },
  [59] = {
    [sym_NL] = STATE(71),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [60] = {
    [sym_COMMENT] = ACTIONS(116),
    [sym_BEGIN] = ACTIONS(118),
    [sym_END] = ACTIONS(118),
    [sym_IDENTIFIER] = ACTIONS(118),
    [anon_sym_CR_LF] = ACTIONS(116),
    [anon_sym_CR] = ACTIONS(118),
    [anon_sym_LF] = ACTIONS(116),
  },
  [61] = {
    [sym_COMMENT] = ACTIONS(120),
    [sym_BEGIN] = ACTIONS(122),
    [sym_END] = ACTIONS(122),
    [sym_IDENTIFIER] = ACTIONS(122),
    [anon_sym_CR_LF] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(120),
  },
  [62] = {
    [sym_NL] = STATE(72),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(39),
  },
  [63] = {
    [sym_COMMENT] = ACTIONS(144),
    [sym_BEGIN] = ACTIONS(146),
    [sym_END] = ACTIONS(146),
    [sym_IDENTIFIER] = ACTIONS(146),
    [anon_sym_CR_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(144),
  },
  [64] = {
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_BSLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(162),
  },
  [65] = {
    [sym_COMMENT] = ACTIONS(164),
    [sym_COMMA] = ACTIONS(164),
    [anon_sym_CR_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_LF] = ACTIONS(164),
  },
  [66] = {
    [aux_sym_STRING_repeat1] = STATE(66),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_BSLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(171),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_COMMENT] = ACTIONS(174),
    [sym_BEGIN] = ACTIONS(176),
    [sym_IDENTIFIER] = ACTIONS(176),
    [anon_sym_CR_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(174),
  },
  [68] = {
    [sym_COMMENT] = ACTIONS(178),
    [sym_COMMA] = ACTIONS(178),
    [anon_sym_CR_LF] = ACTIONS(178),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_LF] = ACTIONS(178),
  },
  [69] = {
    [aux_sym_arguments_repeat1] = STATE(69),
    [sym_COMMENT] = ACTIONS(178),
    [sym_COMMA] = ACTIONS(182),
    [anon_sym_CR_LF] = ACTIONS(178),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_LF] = ACTIONS(178),
  },
  [70] = {
    [sym_COMMENT] = ACTIONS(185),
    [sym_BEGIN] = ACTIONS(187),
    [sym_END] = ACTIONS(187),
    [sym_IDENTIFIER] = ACTIONS(187),
    [anon_sym_CR_LF] = ACTIONS(185),
    [anon_sym_CR] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(185),
  },
  [71] = {
    [sym_COMMENT] = ACTIONS(156),
    [sym_BEGIN] = ACTIONS(158),
    [sym_END] = ACTIONS(158),
    [sym_IDENTIFIER] = ACTIONS(158),
    [anon_sym_CR_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(156),
  },
  [72] = {
    [sym_COMMENT] = ACTIONS(174),
    [sym_BEGIN] = ACTIONS(176),
    [sym_END] = ACTIONS(176),
    [sym_IDENTIFIER] = ACTIONS(176),
    [anon_sym_CR_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(174),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(4),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_NL, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_NL, 1),
  [29] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_statement, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, SHIFT(27),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_line, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_statements, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(15),
  [55] = {.count = 1, .reusable = false}, SHIFT(41),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_statements, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_line, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_line, 2),
  [67] = {.count = 1, .reusable = false}, SHIFT(49),
  [69] = {.count = 1, .reusable = false}, SHIFT(50),
  [71] = {.count = 1, .reusable = true}, SHIFT(51),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_argumentNumber, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_argumentNumber, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(54),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_argument, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_argument, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_argumentString, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_argumentString, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_instruction, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_instruction, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(4),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(5),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(5),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(41),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(16),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(16),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_STRING, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_STRING, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(64),
  [140] = {.count = 1, .reusable = false}, SHIFT(65),
  [142] = {.count = 1, .reusable = true}, SHIFT(66),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_instruction, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_instruction, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 4),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 4),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_end, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_end, 3),
  [160] = {.count = 1, .reusable = false}, REDUCE(aux_sym_STRING_repeat1, 2),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_STRING_repeat1, 2),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_STRING, 3),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_STRING, 3),
  [168] = {.count = 2, .reusable = false}, REDUCE(aux_sym_STRING_repeat1, 2), SHIFT_REPEAT(50),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_STRING_repeat1, 2), SHIFT_REPEAT(66),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_instruction, 4),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_instruction, 4),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(54),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 5),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sage_js_osa() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
