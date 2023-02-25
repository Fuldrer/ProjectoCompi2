%{
    #include <cstdio>
    #include <iostream>
    #include <string>

    using namespace std;
    extern int yylineno;
    int yylex();
    void yyerror(const char * message){
        fprintf(stderr, "Error: %s in line: %d", message, yylineno);
    }
%}

%token TK_ID TK_NUMBER TK_INCREMENT TK_DECREMENT TK_LOGICAL_AND TK_NOT
%token TK_LOGICAL_OR TK_EQ TK_DISTINCT TK_GREAT_EQ_THAN
%token TK_LESS_EQ_THAN TK_OP_RANGE TK_LEFTPARENS TK_RIGHTPARENS KW_BREAK KW_DO KW_ELSE
%token KW_FALSE KW_FOR KW_IF KW_IN KW_RETURN KW_TRUE KW_VAR KW_INT KW_FLOAT KW_BOOLEAN
%token KW_STRING KW_ARRAY  KW_FUN KW_WHILE TK_LEFTKEY TK_RIGHTKEY KW_CHAR TK_COMMENT_LINE TK_LIT_STRING

%%

program: block
        ;

block: statement_list
      |
       ;

statement_list: statement_list statement
                | statement
                ;

statement:KW_VAR TK_ID ':' type '=' statement
        | KW_VAR TK_ID ':' type
        | KW_VAR TK_ID '=' statement
        | KW_FUN TK_ID TK_LEFTPARENS param_list TK_RIGHTPARENS ':' type TK_LEFTKEY statement_list TK_RIGHTKEY
        | KW_FUN TK_ID TK_LEFTPARENS param_list TK_RIGHTPARENS
        | TK_ID '=' statement
        | TK_ID TK_LEFTPARENS statement TK_RIGHTPARENS
        | KW_FOR TK_LEFTPARENS statement TK_RIGHTPARENS TK_LEFTKEY statement_list TK_RIGHTKEY
        | KW_WHILE TK_LEFTPARENS statement TK_RIGHTPARENS TK_LEFTKEY statement_list  TK_RIGHTKEY
        | KW_DO TK_LEFTKEY statement_list TK_RIGHTKEY KW_WHILE TK_LEFTPARENS expression TK_RIGHTPARENS
        | KW_IF TK_LEFTPARENS statement TK_RIGHTPARENS TK_LEFTKEY statement_list TK_RIGHTKEY
        | KW_IF TK_LEFTPARENS statement TK_RIGHTPARENS TK_LEFTKEY statement_list TK_RIGHTKEY KW_ELSE TK_LEFTKEY statement_list TK_RIGHTKEY
        | expression
        ;



expression: expression '<' arithmetic_expr
           | expression '>' arithmetic_expr
           | expression TK_LESS_EQ_THAN arithmetic_expr
           | expression TK_GREAT_EQ_THAN arithmetic_expr
           | arithmetic_expr
           ;

arithmetic_expr: arithmetic_expr '+' factor
            | arithmetic_expr '-' factor
            | arithmetic_expr TK_LOGICAL_OR factor
            | factor
            ;

factor: factor '*' unary_expr
        | factor '/' unary_expr
        | factor '%' unary_expr
        | factor TK_LOGICAL_AND unary_expr
        | unary_expr
        ;

unary_expr: TK_NOT term
           | term
           ;

term: TK_COMMENT_LINE
    | TK_ID '[' term ']'
    | '(' expression ')'
    | TK_NUMBER
    | TK_ID
    | TK_LIT_STRING
    ;

param_list: expression
            ;


type: KW_INT  
     | KW_FLOAT 
     | KW_CHAR 
     | KW_BOOLEAN 
     | KW_STRING 
     | KW_ARRAY
     ;
%%