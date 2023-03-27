%code requires{
    #include "ast.h"
}

%{
    #include <cstdio>

    extern int yylineno;
    int yylex();
    extern int line;
    extern int column;
    void yyerror(const char * message){
        fprintf(stderr, "Error: %s in line: %d and column %d", message, line, column);
    }
%}

%union
{
    Expression * expr_T;
    char * string_T;
    ComplexType * type_t;
    char char_t;
    int int_t;
    float float_t;
    bool bool_t;
    Statement * statement_t;
    list<Expression *> * expr_list_t;
    list<Statement *> * statement_list_t;
    list<Declaration *> * declaration_list_t;
}
//TK_INCREMENT TK_DECREMENT TK_EQ TK_DISTINCT TK_OP_RANGE KW_BREAK  KW_IN KW_RETURN 
%token  TK_LOGICAL_AND TK_NOT
%token TK_LOGICAL_OR TK_GREAT_EQ_THAN
%token TK_LESS_EQ_THAN  KW_DO KW_ELSE TK_INCREMENT TK_DECREMENT TK_EQ TK_DISTINCT TK_OP_RANGE KW_IN KW_RETURN KW_BREAK
%token KW_FOR KW_IF KW_VAR KW_INT KW_FLOAT KW_BOOLEAN
%token KW_STRING KW_ARRAY  KW_FUN KW_WHILE TK_LEFTKEY TK_RIGHTKEY KW_CHAR KW_PRINTLN

%token<float_t> TK_FLOAT
%token<int_t> TK_NUMBER
%type<expr_T> term unary_expr arithmetic_expr expression factor postfix
%token<bool_t> KW_TRUE KW_FALSE
%token<string_T> TK_ID TK_LIT_STRING TK_COMMENT_LINE
%type<int_t> type
%type<statement_list_t> statement_list param_list
%type<statement_t> statement program assigantion_stmt 
//%type<expr_list_t> param_list


%%

program: statement_list {$$ = new MainStmt($1, line, column); $$->evaluateSemantic();}
       ;

statement_list: statement_list statement { $$ = $1; $$->push_back($2); }
                | statement { $$ = new list<Statement *>; $$->push_back($1);}
                ;

statement: KW_PRINTLN '(' expression ')' {$$ = new PrintStmt($3, line, column);}
        | KW_VAR TK_ID ':' KW_ARRAY type '[' expression']' {$$ = new VarDeclarationStatement($2, true, (PrimitiveType)$5, $7, line, column);}
        | KW_VAR TK_ID ':' type {$$ = new VarDeclarationStatement($2, false, (PrimitiveType)$4, NULL, line, column);}
        | assigantion_stmt {$$ = $1;}
        | KW_FUN TK_ID '(' param_list ')' ':' type TK_LEFTKEY statement_list TK_RIGHTKEY { $$ = new FunctionDeclarationStatement($2, $4, (PrimitiveType)$7, $9, line, column);}
        | TK_ID '(' param_list ')' { $$ = new ExpressionStatement(new MethodInvocationExpr(new IDExpr($1, line, column), $3, line, column), line , column); }
        | KW_FOR  expression  TK_LEFTKEY statement_list TK_RIGHTKEY  {$$ = new ForStatement($2, $4, line, column);}
        | KW_WHILE  expression  TK_LEFTKEY statement_list  TK_RIGHTKEY {$$ = new WhileStatement($2, $4, false , line,column);}
        | KW_DO TK_LEFTKEY statement_list TK_RIGHTKEY KW_WHILE expression {$$ = new WhileStatement($6, $3, true, line,column);}
        | KW_IF expression TK_LEFTKEY statement_list TK_RIGHTKEY  {$$ = new IfStatement($2,$4,NULL,line,column); $$->evaluateSemantic();} 
        | KW_IF expression TK_LEFTKEY statement_list TK_RIGHTKEY KW_ELSE TK_LEFTKEY statement_list TK_RIGHTKEY {$$ = new IfStatement($2,$4,$8,line,column);}
        | KW_RETURN expression {$$ = new ReturnStmt($2, line, column);}
        | expression {$$ = new ExpressionStatement($1,line, column);}
        ;

assigantion_stmt: TK_ID '=' expression { $$ = new AssignationStatement($1, $3, NULL, line, column); }
                | TK_ID '[' expression ']' '=' expression { $$ = new AssignationStatement($1, $6, $3, line, column); }
                ;

param_list: param_list ',' statement { $$ = $1; $$->push_back($3);}
            | statement { $$ = new list<Statement *>; $$->push_back($1);}
            | {$$ = new list<Statement *>; }
            ;

expression: expression '<' arithmetic_expr { $$ = new LtExpr($1, $3, line, column);}
           | expression '>' arithmetic_expr { $$ = new GtExpr($1, $3, line, column);}
           | expression TK_LESS_EQ_THAN arithmetic_expr { $$ = new LteExpr($1, $3, line, column);}
           | expression TK_GREAT_EQ_THAN arithmetic_expr { $$ = new GteExpr($1, $3, line, column);}
           | arithmetic_expr {$$ = $1;}
           ;

arithmetic_expr: arithmetic_expr '+' factor { $$ = new AddExpr($1, $3, line, column);}
            | arithmetic_expr '-' factor  { $$ = new SubExpr($1, $3, line, column);}
            | arithmetic_expr TK_LOGICAL_OR factor { $$ = new OrExpr($1, $3, line, column);}
            | factor { $$ = $1; }
            ;

factor: factor '*' unary_expr { $$ = new MultExpr($1, $3, line, column);}
        | factor '/' unary_expr  { $$ = new DivExpr($1, $3, line, column);}
        | factor '%' unary_expr { $$ = new ModExpr($1, $3, line, column);}
        | factor TK_LOGICAL_AND unary_expr { $$ = new AndExpr($1, $3, line, column);}
        | unary_expr { $$ = $1; }
        ;

unary_expr: TK_NOT term { $$ = new UnaryExpr(NOT, $2, line, column); }
           | postfix {$$ = $1;}
           ;

postfix: term TK_INCREMENT { $$ = new UnaryExpr(INCREMENT, $1, line, column); }
        | term TK_DECREMENT { $$ = new UnaryExpr(DECREMENT, $1, line, column); }
        | term {$$ = $1;}
        ;

type: KW_INT { $$ = INTEGER;}
     | KW_FLOAT { $$ = FLOAT; }
     | KW_CHAR { $$ = CHAR; }
     | KW_BOOLEAN { $$ = BOOLEAN; }
     | KW_STRING { $$ = STRING; }
     ;
               
term: TK_COMMENT_LINE {$$ = new CommentExpr($1, line, column);}
    | TK_ID '[' expression ']' {$$ = new ArrayExpr( new IDExpr($1, line, column), $3, line, column); }
    | '(' expression ')' {$$ = $2;}
    | TK_NUMBER {$$ = new IntExpr($1, line, column);}
    | TK_ID {$$ = new IDExpr($1, line, column);}
    | TK_LIT_STRING {$$ = new StringExpr($1,line, column);}
    | KW_TRUE {$$ = new BoolExpr($1, line, column);}
    | KW_FALSE {$$ = new BoolExpr($1, line, column);}
    | TK_FLOAT {$$ = new FloatExpr($1, line, column);}
    ;



%%