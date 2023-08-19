%{

%}

keywords "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
alpha [_A-Za-z]
identifier {alpha}({alpha}|[0-9])*
digit [0-9]
nonzero_digit [1-9]
integer_constant {nonzero_digit}{digit}*
digit_sequence {digit}+
fractional_constant {digit_sequence}?\\.{digit_sequence}|{digit_sequence}\\.
exponent_part [eE][+-]?{digit_sequence}
floating_constant {fractional_constant}{exponent_part}?|{digit_sequence}{exponent_part}
enumeration_constant {identifier}
escape_sequence \\[abfnrtv\\?'"]
c_char [^'\\\n]|{escape_sequence}
c_char_sequence {c_char}+
character_constant '{c_char_sequence}'
