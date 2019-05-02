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
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_COMMENT = 1,
  sym_BEGIN = 2,
  sym_END = 3,
  sym_COMMA = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_BSLASH = 6,
  aux_sym_STRING_token1 = 7,
  aux_sym_STRING_token2 = 8,
  aux_sym_STRING_token3 = 9,
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
  [ts_builtin_sym_end] = "end",
  [sym_COMMENT] = "COMMENT",
  [sym_BEGIN] = "BEGIN",
  [sym_END] = "END",
  [sym_COMMA] = "COMMA",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_STRING_token1] = "STRING_token1",
  [aux_sym_STRING_token2] = "STRING_token2",
  [aux_sym_STRING_token3] = "STRING_token3",
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
  [aux_sym_STRING_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_STRING_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_STRING_token3] = {
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
        SKIP(0);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(3);
      if (lookahead == ' ')
        SKIP(0);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '+')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'I')
        ADVANCE(11);
      if (lookahead == 'N')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == 'b')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(16);
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n')
        ADVANCE(20);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == 'I')
        ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == 'E')
        ADVANCE(22);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_STRING_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == 'E')
        ADVANCE(22);
      if (lookahead == 'b')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == 'o')
        ADVANCE(24);
      if (lookahead == 'x')
        ADVANCE(25);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'a')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_STRING_token1);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_STRING_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == 'E')
        ADVANCE(22);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 21:
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == '+')
        ADVANCE(32);
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '0')
        ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(35);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(36);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'f')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'N')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'g')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'd')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'f')
        ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == '0')
        ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_NUMBER);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_NUMBER);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'i')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'i')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_END);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'i')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_BEGIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_STRING_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 'i')
        ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 't')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'y')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'y')
        ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        SKIP(56);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(3);
      if (lookahead == ' ')
        SKIP(56);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == '\t')
        SKIP(58);
      if (lookahead == ' ')
        SKIP(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == '\t')
        SKIP(59);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(3);
      if (lookahead == ' ')
        SKIP(59);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '+')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'I')
        ADVANCE(21);
      if (lookahead == 'N')
        ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'a')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'N')
        ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == '\t')
        SKIP(62);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(3);
      if (lookahead == ' ')
        SKIP(62);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'e')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == '\t')
        ADVANCE(64);
      if (lookahead == ' ')
        ADVANCE(64);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_STRING_token3);
      if (lookahead == '\t')
        ADVANCE(64);
      if (lookahead == ' ')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_STRING_token3);
      END_STATE();
    case 66:
      if (lookahead == '\t')
        SKIP(66);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(3);
      if (lookahead == ' ')
        SKIP(66);
      if (lookahead == ',')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(10);
      END_STATE();
    case 67:
      if (lookahead == '\t')
        SKIP(67);
      if (lookahead == ' ')
        SKIP(67);
      if (lookahead == 'u')
        ADVANCE(68);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(8);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_STRING_token2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 59},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 59},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 62},
  [21] = {.lex_state = 62},
  [22] = {.lex_state = 56},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 66},
  [29] = {.lex_state = 66},
  [30] = {.lex_state = 66},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 66},
  [33] = {.lex_state = 56},
  [34] = {.lex_state = 56},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 62},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 56},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 62},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 56},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 66},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 59},
  [54] = {.lex_state = 66},
  [55] = {.lex_state = 56},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 56},
  [58] = {.lex_state = 56},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 56},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 62},
  [63] = {.lex_state = 56},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 66},
  [66] = {.lex_state = 63},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 66},
  [69] = {.lex_state = 56},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 62},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_NUMBER] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_COMMA] = ACTIONS(1),
    [sym_COMMENT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_IDENTIFIER] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [sym_BEGIN] = ACTIONS(1),
    [aux_sym_STRING_token1] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_END] = ACTIONS(1),
    [aux_sym_STRING_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_line] = STATE(6),
    [sym_instruction] = STATE(6),
    [sym_NL] = STATE(7),
    [sym_file] = STATE(10),
    [aux_sym_statements_repeat1] = STATE(8),
    [sym_begin] = STATE(9),
    [sym_block] = STATE(6),
    [sym_comment] = STATE(11),
    [sym_statements] = STATE(12),
    [sym_statement] = STATE(8),
    [sym_identifier] = STATE(13),
    [anon_sym_CR] = ACTIONS(3),
    [sym_BEGIN] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(7),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(7),
    [sym_IDENTIFIER] = ACTIONS(11),
  },
  [2] = {
    [anon_sym_CR] = ACTIONS(13),
    [sym_BEGIN] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_CR_LF] = ACTIONS(15),
    [sym_COMMENT] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [sym_IDENTIFIER] = ACTIONS(13),
  },
  [3] = {
    [sym_identifier] = STATE(14),
    [sym_IDENTIFIER] = ACTIONS(17),
  },
  [4] = {
    [anon_sym_CR] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(21),
  },
  [5] = {
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_NUMBER] = ACTIONS(23),
    [anon_sym_CR] = ACTIONS(25),
    [anon_sym_CR_LF] = ACTIONS(23),
    [sym_COMMENT] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(23),
  },
  [6] = {
    [anon_sym_CR] = ACTIONS(27),
    [sym_BEGIN] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_CR_LF] = ACTIONS(29),
    [sym_COMMENT] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [sym_IDENTIFIER] = ACTIONS(27),
  },
  [7] = {
    [anon_sym_CR] = ACTIONS(31),
    [sym_BEGIN] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_CR_LF] = ACTIONS(33),
    [sym_COMMENT] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(33),
    [sym_IDENTIFIER] = ACTIONS(31),
  },
  [8] = {
    [sym_line] = STATE(6),
    [sym_instruction] = STATE(6),
    [sym_NL] = STATE(7),
    [aux_sym_statements_repeat1] = STATE(15),
    [sym_block] = STATE(6),
    [sym_begin] = STATE(9),
    [sym_comment] = STATE(11),
    [sym_statement] = STATE(15),
    [sym_identifier] = STATE(13),
    [anon_sym_CR] = ACTIONS(3),
    [sym_BEGIN] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_CR_LF] = ACTIONS(7),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(7),
    [sym_IDENTIFIER] = ACTIONS(11),
  },
  [9] = {
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_NL] = STATE(19),
    [aux_sym_statements_repeat1] = STATE(20),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(21),
    [sym_comment] = STATE(22),
    [sym_statements] = STATE(23),
    [sym_statement] = STATE(20),
    [sym_end] = STATE(24),
    [sym_identifier] = STATE(25),
    [anon_sym_CR] = ACTIONS(37),
    [sym_BEGIN] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
    [sym_END] = ACTIONS(41),
    [sym_IDENTIFIER] = ACTIONS(11),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [11] = {
    [sym_NL] = STATE(26),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(7),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(45),
  },
  [13] = {
    [sym_STRING] = STATE(29),
    [sym_argumentString] = STATE(30),
    [sym_comment] = STATE(31),
    [sym_argument] = STATE(32),
    [sym_argumentNumber] = STATE(30),
    [sym_NL] = STATE(33),
    [sym_arguments] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_NUMBER] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_CR_LF] = ACTIONS(7),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(7),
  },
  [14] = {
    [sym_STRING] = STATE(29),
    [sym_argumentString] = STATE(30),
    [sym_comment] = STATE(35),
    [sym_argument] = STATE(32),
    [sym_argumentNumber] = STATE(30),
    [sym_NL] = STATE(36),
    [sym_arguments] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_NUMBER] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
  },
  [15] = {
    [sym_line] = STATE(6),
    [sym_instruction] = STATE(6),
    [sym_NL] = STATE(7),
    [aux_sym_statements_repeat1] = STATE(15),
    [sym_block] = STATE(6),
    [sym_begin] = STATE(9),
    [sym_comment] = STATE(11),
    [sym_statement] = STATE(15),
    [sym_identifier] = STATE(13),
    [anon_sym_CR] = ACTIONS(51),
    [sym_BEGIN] = ACTIONS(54),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_CR_LF] = ACTIONS(59),
    [sym_COMMENT] = ACTIONS(62),
    [anon_sym_LF] = ACTIONS(59),
    [sym_IDENTIFIER] = ACTIONS(65),
  },
  [16] = {
    [anon_sym_CR] = ACTIONS(13),
    [sym_BEGIN] = ACTIONS(13),
    [anon_sym_CR_LF] = ACTIONS(15),
    [sym_COMMENT] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [sym_END] = ACTIONS(13),
    [sym_IDENTIFIER] = ACTIONS(13),
  },
  [17] = {
    [sym_NL] = STATE(38),
    [sym_comment] = STATE(39),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_CR_LF] = ACTIONS(7),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(7),
  },
  [18] = {
    [anon_sym_CR] = ACTIONS(27),
    [sym_BEGIN] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(29),
    [sym_COMMENT] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [sym_END] = ACTIONS(27),
    [sym_IDENTIFIER] = ACTIONS(27),
  },
  [19] = {
    [anon_sym_CR] = ACTIONS(31),
    [sym_BEGIN] = ACTIONS(31),
    [anon_sym_CR_LF] = ACTIONS(33),
    [sym_COMMENT] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(33),
    [sym_END] = ACTIONS(31),
    [sym_IDENTIFIER] = ACTIONS(31),
  },
  [20] = {
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_NL] = STATE(19),
    [aux_sym_statements_repeat1] = STATE(40),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(21),
    [sym_comment] = STATE(22),
    [sym_statement] = STATE(40),
    [sym_identifier] = STATE(25),
    [anon_sym_CR] = ACTIONS(37),
    [sym_BEGIN] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
    [sym_END] = ACTIONS(68),
    [sym_IDENTIFIER] = ACTIONS(11),
  },
  [21] = {
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_NL] = STATE(19),
    [aux_sym_statements_repeat1] = STATE(20),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(21),
    [sym_comment] = STATE(22),
    [sym_statements] = STATE(42),
    [sym_statement] = STATE(20),
    [sym_end] = STATE(43),
    [sym_identifier] = STATE(25),
    [anon_sym_CR] = ACTIONS(37),
    [sym_BEGIN] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
    [sym_END] = ACTIONS(70),
    [sym_IDENTIFIER] = ACTIONS(11),
  },
  [22] = {
    [sym_NL] = STATE(44),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
  },
  [23] = {
    [sym_end] = STATE(45),
    [sym_END] = ACTIONS(72),
  },
  [24] = {
    [anon_sym_CR] = ACTIONS(74),
    [sym_BEGIN] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_CR_LF] = ACTIONS(76),
    [sym_COMMENT] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(76),
    [sym_IDENTIFIER] = ACTIONS(74),
  },
  [25] = {
    [sym_STRING] = STATE(29),
    [sym_argumentString] = STATE(30),
    [sym_comment] = STATE(46),
    [sym_argument] = STATE(32),
    [sym_argumentNumber] = STATE(30),
    [sym_NL] = STATE(47),
    [sym_arguments] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_NUMBER] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
  },
  [26] = {
    [anon_sym_CR] = ACTIONS(78),
    [sym_BEGIN] = ACTIONS(78),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_CR_LF] = ACTIONS(80),
    [sym_COMMENT] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(80),
    [sym_IDENTIFIER] = ACTIONS(78),
  },
  [27] = {
    [aux_sym_STRING_repeat1] = STATE(51),
    [aux_sym_STRING_token3] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(86),
  },
  [28] = {
    [anon_sym_CR] = ACTIONS(88),
    [anon_sym_CR_LF] = ACTIONS(90),
    [sym_COMMENT] = ACTIONS(90),
    [sym_COMMA] = ACTIONS(90),
    [anon_sym_LF] = ACTIONS(90),
  },
  [29] = {
    [anon_sym_CR] = ACTIONS(92),
    [anon_sym_CR_LF] = ACTIONS(94),
    [sym_COMMENT] = ACTIONS(94),
    [sym_COMMA] = ACTIONS(94),
    [anon_sym_LF] = ACTIONS(94),
  },
  [30] = {
    [anon_sym_CR] = ACTIONS(96),
    [anon_sym_CR_LF] = ACTIONS(98),
    [sym_COMMENT] = ACTIONS(98),
    [sym_COMMA] = ACTIONS(98),
    [anon_sym_LF] = ACTIONS(98),
  },
  [31] = {
    [sym_NL] = STATE(52),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(7),
  },
  [32] = {
    [aux_sym_arguments_repeat1] = STATE(54),
    [anon_sym_CR] = ACTIONS(100),
    [anon_sym_CR_LF] = ACTIONS(102),
    [sym_COMMENT] = ACTIONS(102),
    [anon_sym_LF] = ACTIONS(102),
    [sym_COMMA] = ACTIONS(104),
  },
  [33] = {
    [anon_sym_CR] = ACTIONS(106),
    [sym_BEGIN] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_CR_LF] = ACTIONS(108),
    [sym_COMMENT] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(108),
    [sym_IDENTIFIER] = ACTIONS(106),
  },
  [34] = {
    [sym_NL] = STATE(52),
    [sym_comment] = STATE(55),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_CR_LF] = ACTIONS(7),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(7),
  },
  [35] = {
    [sym_NL] = STATE(56),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
  },
  [36] = {
    [anon_sym_CR] = ACTIONS(110),
    [sym_BEGIN] = ACTIONS(110),
    [anon_sym_CR_LF] = ACTIONS(112),
    [sym_COMMENT] = ACTIONS(112),
    [anon_sym_LF] = ACTIONS(112),
    [sym_END] = ACTIONS(110),
    [sym_IDENTIFIER] = ACTIONS(110),
  },
  [37] = {
    [sym_NL] = STATE(56),
    [sym_comment] = STATE(57),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
  },
  [38] = {
    [anon_sym_CR] = ACTIONS(114),
    [sym_BEGIN] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_CR_LF] = ACTIONS(116),
    [sym_COMMENT] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(116),
    [sym_IDENTIFIER] = ACTIONS(114),
  },
  [39] = {
    [sym_NL] = STATE(58),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(7),
  },
  [40] = {
    [sym_line] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_NL] = STATE(19),
    [aux_sym_statements_repeat1] = STATE(40),
    [sym_block] = STATE(18),
    [sym_begin] = STATE(21),
    [sym_comment] = STATE(22),
    [sym_statement] = STATE(40),
    [sym_identifier] = STATE(25),
    [anon_sym_CR] = ACTIONS(118),
    [sym_BEGIN] = ACTIONS(54),
    [anon_sym_CR_LF] = ACTIONS(121),
    [sym_COMMENT] = ACTIONS(62),
    [anon_sym_LF] = ACTIONS(121),
    [sym_END] = ACTIONS(124),
    [sym_IDENTIFIER] = ACTIONS(65),
  },
  [41] = {
    [sym_NL] = STATE(59),
    [sym_comment] = STATE(60),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
  },
  [42] = {
    [sym_end] = STATE(61),
    [sym_END] = ACTIONS(126),
  },
  [43] = {
    [anon_sym_CR] = ACTIONS(74),
    [sym_BEGIN] = ACTIONS(74),
    [anon_sym_CR_LF] = ACTIONS(76),
    [sym_COMMENT] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(76),
    [sym_END] = ACTIONS(74),
    [sym_IDENTIFIER] = ACTIONS(74),
  },
  [44] = {
    [anon_sym_CR] = ACTIONS(78),
    [sym_BEGIN] = ACTIONS(78),
    [anon_sym_CR_LF] = ACTIONS(80),
    [sym_COMMENT] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(80),
    [sym_END] = ACTIONS(78),
    [sym_IDENTIFIER] = ACTIONS(78),
  },
  [45] = {
    [anon_sym_CR] = ACTIONS(128),
    [sym_BEGIN] = ACTIONS(128),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_CR_LF] = ACTIONS(130),
    [sym_COMMENT] = ACTIONS(130),
    [anon_sym_LF] = ACTIONS(130),
    [sym_IDENTIFIER] = ACTIONS(128),
  },
  [46] = {
    [sym_NL] = STATE(62),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
  },
  [47] = {
    [anon_sym_CR] = ACTIONS(106),
    [sym_BEGIN] = ACTIONS(106),
    [anon_sym_CR_LF] = ACTIONS(108),
    [sym_COMMENT] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(108),
    [sym_END] = ACTIONS(106),
    [sym_IDENTIFIER] = ACTIONS(106),
  },
  [48] = {
    [sym_NL] = STATE(62),
    [sym_comment] = STATE(63),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_COMMENT] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(39),
  },
  [49] = {
    [aux_sym_STRING_token1] = ACTIONS(132),
    [aux_sym_STRING_token2] = ACTIONS(132),
  },
  [50] = {
    [anon_sym_CR] = ACTIONS(134),
    [anon_sym_CR_LF] = ACTIONS(136),
    [sym_COMMENT] = ACTIONS(136),
    [sym_COMMA] = ACTIONS(136),
    [anon_sym_LF] = ACTIONS(136),
  },
  [51] = {
    [aux_sym_STRING_repeat1] = STATE(66),
    [aux_sym_STRING_token3] = ACTIONS(138),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(140),
  },
  [52] = {
    [anon_sym_CR] = ACTIONS(142),
    [sym_BEGIN] = ACTIONS(142),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_CR_LF] = ACTIONS(144),
    [sym_COMMENT] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(144),
    [sym_IDENTIFIER] = ACTIONS(142),
  },
  [53] = {
    [sym_STRING] = STATE(29),
    [sym_argumentString] = STATE(30),
    [sym_argument] = STATE(67),
    [sym_argumentNumber] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_NUMBER] = ACTIONS(49),
  },
  [54] = {
    [aux_sym_arguments_repeat1] = STATE(68),
    [anon_sym_CR] = ACTIONS(146),
    [anon_sym_CR_LF] = ACTIONS(148),
    [sym_COMMENT] = ACTIONS(148),
    [anon_sym_LF] = ACTIONS(148),
    [sym_COMMA] = ACTIONS(104),
  },
  [55] = {
    [sym_NL] = STATE(69),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(7),
  },
  [56] = {
    [anon_sym_CR] = ACTIONS(150),
    [sym_BEGIN] = ACTIONS(150),
    [anon_sym_CR_LF] = ACTIONS(152),
    [sym_COMMENT] = ACTIONS(152),
    [anon_sym_LF] = ACTIONS(152),
    [sym_END] = ACTIONS(150),
    [sym_IDENTIFIER] = ACTIONS(150),
  },
  [57] = {
    [sym_NL] = STATE(70),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
  },
  [58] = {
    [anon_sym_CR] = ACTIONS(154),
    [sym_BEGIN] = ACTIONS(154),
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_CR_LF] = ACTIONS(156),
    [sym_COMMENT] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(156),
    [sym_IDENTIFIER] = ACTIONS(154),
  },
  [59] = {
    [anon_sym_CR] = ACTIONS(114),
    [sym_BEGIN] = ACTIONS(114),
    [anon_sym_CR_LF] = ACTIONS(116),
    [sym_COMMENT] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(116),
    [sym_END] = ACTIONS(114),
    [sym_IDENTIFIER] = ACTIONS(114),
  },
  [60] = {
    [sym_NL] = STATE(71),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
  },
  [61] = {
    [anon_sym_CR] = ACTIONS(128),
    [sym_BEGIN] = ACTIONS(128),
    [anon_sym_CR_LF] = ACTIONS(130),
    [sym_COMMENT] = ACTIONS(130),
    [anon_sym_LF] = ACTIONS(130),
    [sym_END] = ACTIONS(128),
    [sym_IDENTIFIER] = ACTIONS(128),
  },
  [62] = {
    [anon_sym_CR] = ACTIONS(142),
    [sym_BEGIN] = ACTIONS(142),
    [anon_sym_CR_LF] = ACTIONS(144),
    [sym_COMMENT] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(144),
    [sym_END] = ACTIONS(142),
    [sym_IDENTIFIER] = ACTIONS(142),
  },
  [63] = {
    [sym_NL] = STATE(72),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
  },
  [64] = {
    [anon_sym_DQUOTE] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(158),
    [aux_sym_STRING_token3] = ACTIONS(160),
  },
  [65] = {
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_CR_LF] = ACTIONS(164),
    [sym_COMMENT] = ACTIONS(164),
    [sym_COMMA] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(164),
  },
  [66] = {
    [aux_sym_STRING_repeat1] = STATE(66),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(166),
    [aux_sym_STRING_token3] = ACTIONS(169),
  },
  [67] = {
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_CR_LF] = ACTIONS(174),
    [sym_COMMENT] = ACTIONS(174),
    [sym_COMMA] = ACTIONS(174),
    [anon_sym_LF] = ACTIONS(174),
  },
  [68] = {
    [aux_sym_arguments_repeat1] = STATE(68),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_CR_LF] = ACTIONS(174),
    [sym_COMMENT] = ACTIONS(174),
    [sym_COMMA] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(174),
  },
  [69] = {
    [anon_sym_CR] = ACTIONS(179),
    [sym_BEGIN] = ACTIONS(179),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(181),
    [sym_COMMENT] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(181),
    [sym_IDENTIFIER] = ACTIONS(179),
  },
  [70] = {
    [anon_sym_CR] = ACTIONS(183),
    [sym_BEGIN] = ACTIONS(183),
    [anon_sym_CR_LF] = ACTIONS(185),
    [sym_COMMENT] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [sym_END] = ACTIONS(183),
    [sym_IDENTIFIER] = ACTIONS(183),
  },
  [71] = {
    [anon_sym_CR] = ACTIONS(154),
    [sym_BEGIN] = ACTIONS(154),
    [anon_sym_CR_LF] = ACTIONS(156),
    [sym_COMMENT] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(156),
    [sym_END] = ACTIONS(154),
    [sym_IDENTIFIER] = ACTIONS(154),
  },
  [72] = {
    [anon_sym_CR] = ACTIONS(179),
    [sym_BEGIN] = ACTIONS(179),
    [anon_sym_CR_LF] = ACTIONS(181),
    [sym_COMMENT] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(181),
    [sym_END] = ACTIONS(179),
    [sym_IDENTIFIER] = ACTIONS(179),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_NL, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_NL, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_statement, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_line, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_statements, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(27),
  [49] = {.count = 1, .reusable = true}, SHIFT(28),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(3),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(5),
  [68] = {.count = 1, .reusable = false}, REDUCE(sym_statements, 1),
  [70] = {.count = 1, .reusable = false}, SHIFT(41),
  [72] = {.count = 1, .reusable = true}, SHIFT(17),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_line, 2),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_line, 2),
  [82] = {.count = 1, .reusable = true}, SHIFT(51),
  [84] = {.count = 1, .reusable = false}, SHIFT(49),
  [86] = {.count = 1, .reusable = false}, SHIFT(50),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_argumentNumber, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_argumentNumber, 1),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_argumentString, 1),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_argumentString, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_argument, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_argument, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 1),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 1),
  [104] = {.count = 1, .reusable = true}, SHIFT(53),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_instruction, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_instruction, 2),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 3),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(16),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(16),
  [124] = {.count = 1, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2),
  [126] = {.count = 1, .reusable = true}, SHIFT(41),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [132] = {.count = 1, .reusable = true}, SHIFT(64),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_STRING, 2),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_STRING, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(66),
  [140] = {.count = 1, .reusable = false}, SHIFT(65),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_instruction, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_instruction, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 4),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 4),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_end, 3),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_end, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(aux_sym_STRING_repeat1, 2),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym_STRING_repeat1, 2),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_STRING, 3),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_STRING, 3),
  [166] = {.count = 2, .reusable = false}, REDUCE(aux_sym_STRING_repeat1, 2), SHIFT_REPEAT(49),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_STRING_repeat1, 2), SHIFT_REPEAT(66),
  [172] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(53),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_instruction, 4),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_instruction, 4),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 5),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 5),
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
