%{
  
   #include "tokens.h"
    int line = 1;
    int column = 0;

%}

%option noyywrap
%option yylineno

LETTER [a-zA-Z]
DIGIT [0-9]


%%
"++" {return TK_INCREMENT;}
"--" {return TK_DECREMENT;}
"&&" {return TK_LOGICAL_AND;}
"||" {return TK_LOGICAL_OR;}
"==" {return TK_EQ;}
"!=" {return TK_DISTINCT;}
">=" {return TK_GREAT_EQ_THAN;}
"<=" {return TK_LESS_EQ_THAN;}
".." {return TK_OP_RANGE;} 
"+" {return '+';}  
"-" {return '-';}
"*" {return '*';}
"/" {return '/';}
"%" {return '%';}
"=" {return '=';}
"," {return ',';}
":" {return ':';}
"!" {return TK_NOT;}
">" {return '>';}
"<" {return '<';}
"[" {return '[';}
"]" {return ']';}
";" {return ';';}
"(" {return TK_LEFTPARENS;}
")" {return TK_RIGHTPARENS;}
"{" {return TK_LEFTKEY;}
"}" {return TK_RIGHTKEY;}
"break" {return KW_BREAK;}
"do" {return KW_DO;}
"else" {return KW_ELSE;}
"false" {return KW_FALSE;}
"for" {return KW_FOR;}
"fun" {return KW_FUN; }
"if" {return KW_IF;}
"in" { return KW_IN;}
"return" {return KW_RETURN;}
"true" {return KW_TRUE;}
"var" {return KW_VAR;}
"Int" {return KW_INT;}
"Float" {return KW_FLOAT;}
"Boolean" {return KW_BOOLEAN;}
"String" {return KW_STRING;}
"Array" {return KW_ARRAY;}
"while" {return KW_WHILE;}
\".*\" {return TK_LIT_STRING;}
"//"+(.*)+[\n \r \t] {return TK_COMMENT_LINE;}
{LETTER}({DIGIT}|{LETTER}|_)* {return TK_ID;}
{DIGIT}+("."{DIGIT}+)* {return TK_NUMBER;}

[\n \r \t] {/*ignorar*/}

. {printf("caracter invalido %c en la linea: %d\n", yytext[0], yylineno);}
%%