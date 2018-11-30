function delimit1(by, rule) {
	return seq(rule, repeat(seq(by, rule)));
}

function delimit(by, rule) {
	return optional(delimit1(by, rule));
}

module.exports = grammar({
	name: 'sage_js_osa',

	extras: $ => [
		' ',
		'\t'
	],

	rules: {
		file: $ => $.statements,

		statements: $ => repeat1($.statement),

		statement: $ => choice($.line, $.instruction, $.block),

		line: $ => seq(optional($.comment), $.NL),

		instruction: $ => seq($.identifier, optional($.arguments), optional($.comment), $.NL),

		block: $ => seq($.begin, optional($.statements), $.end),

		begin: $ => seq($.BEGIN, $.identifier, optional($.arguments), optional($.comment), $.NL),

		end: $ => seq($.END, optional($.comment), $.NL),

		arguments: $ => delimit1($.COMMA, $.argument),

		argument: $ => choice(
			$.argumentNumber,
			$.argumentString
		),

		argumentNumber: $ => $.NUMBER,

		argumentString: $ => $.STRING,

		comment: $ => $.COMMENT,

		identifier: $ => $.IDENTIFIER,

		COMMENT: $ => /;[^\r\n]*/,

		BEGIN: $ => 'begin',

		END: $ => 'end',

		COMMA: $ => ',',

		STRING: $ => {
			const STRING_UNICODE = /u[0-9a-zA-Z]{4}/;
			const STRING_ESC = seq(
				'\\',
				choice(
					/["\\\/bfnrt]/,
					STRING_UNICODE
				)
			);
			const STRING_CHARS = /[^"\\\r\n]/;
			return seq(
				'"',
				repeat(choice(STRING_ESC, STRING_CHARS)),
				'"'
			)
		},

		NUMBER: $ => {
			const INT = seq(
				optional(choice('-', '+')),
				choice(
					'0',
					/[1-9][0-9]*/
				)
			);
			const INT_OCTAL = seq(
				optional(choice('-', '+')),
				'0o',
				/[0-7]+/
			);
			const INT_BIN = seq(
				optional(choice('-', '+')),
				'0b',
				/[0-1]+/
			);
			const INT_HEX = seq(
				optional(choice('-', '+')),
				'0x',
				/[0-9a-fA-F]+/
			);
			const EXP = seq(
				choice('E', 'e'),
				INT
			);
			const NAN = 'NaN';
			const INFINITY = seq(
				optional(choice('-', '+')),
				'Infinity'
			);
			const FLOAT = choice(
				seq(optional(INT), '.', /[0-9]*/, optional(EXP)),
				seq(choice('-', '+'), '.', /[0-9]*/, optional(EXP)),
				seq(INT, optional(EXP))
			);

			return token(choice(
				FLOAT,
				INT,
				INT_HEX,
				INT_BIN,
				INT_OCTAL,
				INFINITY,
				NAN
			));
		},

		IDENTIFIER: $ => /[_a-zA-Z][_a-zA-Z0-9]*/,

		NL: $ => choice('\r\n', '\r', '\n')
	}
});
