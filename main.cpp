#include <stdio.h>

extern FILE * yyin;
int yylex();
extern char * yytext;
extern int yylineno;

int main(int argc, char*argv[]){

    if(argc != 2){
        fprintf(stderr, "Falta el archivo de entrada para %s\n", argv[0]);
        return 1;
    }

    FILE * f = fopen(argv[1], "r");
    if(f == NULL){
        fprintf(stderr, "Error intentando abrir el archivo %s\n", argv[1]);
        return 1;
    }

    yyin = f;

    int currentToken = yylex();
    while(currentToken != 0){
        printf("Lexema: %s, Token: %d, Linea: %d\n", yytext, currentToken, yylineno);
        currentToken = yylex();
    }
    return 0;
}