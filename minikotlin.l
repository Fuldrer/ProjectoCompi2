%{
  
   //#include "tokens.h"
    int line = 1;
    int column = 0;
    enum Tokens
    {
        TK_PLUS,
        TK_ID,
        TK_NUMBER,
        TK_OR,
        TK_INCREMENT,
        TK_DECREMENT,
        TK_LOGICAL_AND,
        TK_NOT,
        TK_LOGICAL_OR,
        TK_EQ,
        TK_DISTINCT,
        TK_GREAT_THAN,
        TK_LESS_THAN,
        TK_GREAT_EQ_THAN,
        TK_LESS_EQ_THAN,
        TK_OP_RANGE,
        TK_LEFTPARENS,
        TK_RIGHTPARENS,
        KW_BREAK,
        KW_DO,
        KW_ELSE,
        KW_FALSE,
        KW_FOR,
        KW_IF,
        KW_IN,
        KW_RETURN,
        KW_TRUE,
        KW_VAR,
        KW_INT,
        KW_FLOAT,
        KW_BOOLEAN,
        KW_STRING,
        KW_ARRAY,
        KW_FUN,
        KW_WHILE,
        TK_LEFTKEY,
        TK_RIGHTKEY,
        TK_COMA,
        TK_SEMICOLON

    };
%}

%option noyywrap
%option yylineno

LETTER [a-zA-Z]
DIGIT [0-9]


%%

"+" {return '+';}  
"-" {return '-';}
"*" {return '*';}
"/" {return '/';}
"%" {return '%';}
"=" {return '=';}
"," {return TK_COMA;}
":" {return TK_SEMICOLON;}
"++" {return TK_INCREMENT;}
"--" {return TK_DECREMENT;}
"&&" {return TK_LOGICAL_AND;}
"!" {return TK_NOT;}
"||" {return TK_LOGICAL_OR;}
"==" {return TK_EQ;}
"!=" {return TK_DISTINCT;}
">" {return TK_GREAT_THAN;}
"<" {return TK_LESS_THAN;}
">=" {return TK_GREAT_EQ_THAN;}
"<=" {return TK_LESS_EQ_THAN;}
"[" {return '[';}
"]" {return ']';}
".." {return TK_OP_RANGE;} 
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
"int" {return KW_INT;}
"float" {return KW_FLOAT;}
"boolean" {return KW_BOOLEAN;}
"string" {return KW_STRING;}
"array" {return KW_ARRAY;}
"while" {return KW_WHILE;}
{LETTER}({DIGIT}|{LETTER}|_)* {return TK_ID;}
{DIGIT}* {return TK_NUMBER;}
[\n \r \t] {/*ignorar*/}

. {printf("caracter invalido %c en la linea: %d\n", yytext[0], yylineno);}
%%