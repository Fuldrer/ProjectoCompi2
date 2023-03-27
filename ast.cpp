#include "ast.h"
#include <iostream>
#include <map>

using namespace std;
//map<string, MethodInformation *> methods = {};

void IDExpr::print(){
    cout<<"Id expr: "<< this->id <<" line: "<< this->line << " column : "<<this->column<<endl;
}

void ArrayExpr::print(){
    cout<<"Id expr: "<< this->id <<" line: "<< this->line << " column : "<<this->column<<endl;
}

void StringExpr::print(){
    cout<<"string expr: "<< this->value <<" line: "<< this->line << " column : "<<this->column<<endl;
}

void FloatExpr::print(){
    cout<<"float expr: "<< this->value <<" line: "<< this->line << " column : "<<this->column<<endl;
}

void IntExpr::print(){
    cout<<"int expr: "<< this->value <<" line: "<< this->line << " column : "<<this->column<<endl;
}

void BoolExpr::print(){
    cout<<"bool expr: "<< this->value <<" line: "<< this->line << " column : "<<this->column<<endl;
}

void UnaryExpr::print(){
    cout<<"unary expr line: "<< this->line << " column : "<<this->column<<endl;
}

void CommentExpr::print(){
    cout<<"comment expr line: "<< this->line << " column : "<<this->column<<endl;
}



#define PRINT_BINARY_EXPR(name)\
void name##Expr::print(){\
    cout<<""<<endl;\
};


void MethodInvocationExpr::print(){
    cout<<"Method invocation: "<<this->id->id<<" line:" <<this->line << " column : "<<this->column<<endl;
}

void ExpressionStatement::print(){

}

void IfStatement::print(){
    
}

void WhileStatement::print(){
    
}

void ForStatement::print(){
    
}

void FunctionDeclarationStatement::print(){
    
}

void VarDeclarationStatement::print(){
    
}

void AssignationStatement::print(){
    
}

void PrintStmt::print(){
    
}

void MainStmt::print(){
    
}


/* Expression Get Type*/

PrimitiveType StringExpr::getType(){
    return STRING;
}

PrimitiveType FloatExpr::getType(){
    return FLOAT;
}

PrimitiveType IntExpr::getType(){
    return INTEGER;
}

PrimitiveType BoolExpr::getType(){
    return BOOLEAN;
}

PrimitiveType CommentExpr::getType(){
    return STRING;
}

PrimitiveType UnaryExpr::getType(){
    PrimitiveType type = this->expr->getType();
    if (this->op == NOT && type != BOOLEAN)
    {
        cerr<<"No se puede aplicar el operador NOT a una expresion no booleana"<<endl;
    }
    return type;
}

map<string, PrimitiveType> exprResultTypes = {
    {"INTEGER,INTEGER", INTEGER},
    {"INTEGER,FLOAT", FLOAT},
    {"FLOAT,INTEGER", FLOAT},
    {"STRING,STRING", STRING},
    {"STRING,CHAR", STRING},
    {"CHAR,STRING", STRING},
    {"BOOLEAN,BOOLEAN", BOOLEAN},
};

string getTypeAsString(PrimitiveType type){
    if (type == STRING)
    {
        return "STRING";
    }else if(type == CHAR){
        return "CHAR";
    }else if(type == BOOLEAN){
        return "BOOLEAN";
    }else if(type == INTEGER){
        return "INTEGER";
    }
    else if(type == FLOAT){
        return "FLOAT";
    }
    return "NONE";
}

#define GET_TYPE_BINARY_EXPR(name)\
PrimitiveType name##Expr::getType(){\
    string leftType = getTypeAsString(this->left->getType());\
    string rightType = getTypeAsString(this->right->getType());\
    PrimitiveType type = exprResultTypes[leftType+","+rightType];\
    if(type == 0){\
        cerr<<"El tipo de dato "<<leftType<<" no puede ser operado con el tipo de dato "<<rightType<<" linea: "<<this->line<<" columna: "<<this->column<<endl;\
    }\
    return type;\
}\

#define GET_TYPE_BINARY_EXPR_BOOL(name)\
PrimitiveType name##Expr::getType(){\
    string leftType = getTypeAsString(this->left->getType());\
    string rightType = getTypeAsString(this->right->getType());\
    if(leftType != rightType){\
        cerr<<"El tipo de dato "<<leftType<<" no puede ser operado con el tipo de dato "<<rightType<<" linea: "<<this->line<<" columna: "<<this->column<<endl;\
    }\
    return BOOLEAN;\
}\

class Context{
    public:
        struct Context * prev;
        map<string, PrimitiveType> vars;
};

map<string, PrimitiveType> vars;
map<string, PrimitiveType> globalVars;
Context * currentContext = NULL;

void pushContext(){
    vars.clear();
    Context * context = new Context();
    context->vars = vars;
    context->prev = currentContext;
    currentContext = context;
}

void popContext(){
    if (currentContext != NULL)
    {
        Context * previous = currentContext->prev;
        free(currentContext);
        currentContext = previous;
    }
}

PrimitiveType getLocalVarType(string id){
    Context * context = currentContext;
    while (context  != NULL)
    {
        if (context->vars[id] != 0)
        {
            return context->vars[id];
        }
        context = context->prev;
    }
    return NONE;
}

PrimitiveType getVarType(string id){
    PrimitiveType resultType = NONE;
    if (currentContext != NULL)
    {
        resultType = getLocalVarType(id);
    }
    if (resultType != NONE)
    {
        return resultType;
    }
    return globalVars[id] != 0 ? globalVars[id] : NONE;
}

PrimitiveType MethodInvocationExpr::getType(){
    /*MethodInformation * method = methods[this->id->id];
    if (method == NULL)
    {
        cerr<<this->id->id<<" no declarado linea: "<<this->line<<" column "<<this->column<<endl;
        return NONE;
    }
    
    if (method->parameters->ids->size() > this->args->size())
    {
        cerr<<"Muy pocos argumentos para el método: "<<this->id->id <<" linea: "<<this->line<<" column "<<this->column<<endl;
        return NONE;
    }
    
    if (method->parameters->ids->size() < this->args->size())
    {
        cerr<<"Muchos argumentos para el método: "<<this->id->id <<" linea: "<<this->line<<" column "<<this->column<<endl;
        return NONE;
    }

    ComplexType * paramsType = method->parameters->type;
    list<Expression*>::iterator argsIt = this->args->begin();
    while (argsIt != this->args->end())
    {
        if ((*argsIt)->getType() != paramsType->primitiveType)
        {   
            cerr<<"Tipo de dato incorrecto en parámetros, se esperaba tipo: "<<getTypeAsString(paramsType->primitiveType)<<" se obtuvo: "<< getTypeAsString((*argsIt)->getType()) <<" linea: "<<this->line<<" column "<<this->column<<endl;
            return NONE;
        }
        argsIt++;
    }
    
    return method->returnType;*/
    return NONE;
}

PrimitiveType IDExpr::getType(){
    PrimitiveType type = getVarType(this->id);
    if (type == NONE)
    {
        cerr<<this->id<<" no declarada linea: "<<this->line<<" column "<<this->column<<endl;
    }
    
    return type;
}

PrimitiveType ArrayExpr::getType(){
    return this->id->getType();
}

PRINT_BINARY_EXPR(And);
PRINT_BINARY_EXPR(Mod);
PRINT_BINARY_EXPR(Div);
PRINT_BINARY_EXPR(Mult);
PRINT_BINARY_EXPR(Or);
PRINT_BINARY_EXPR(Sub);
PRINT_BINARY_EXPR(Add);
PRINT_BINARY_EXPR(Eq);
PRINT_BINARY_EXPR(Neq);
PRINT_BINARY_EXPR(Gt);
PRINT_BINARY_EXPR(Lt);
PRINT_BINARY_EXPR(Gte);
PRINT_BINARY_EXPR(Lte);

GET_TYPE_BINARY_EXPR(And);
GET_TYPE_BINARY_EXPR(Mod);
GET_TYPE_BINARY_EXPR(Div);
GET_TYPE_BINARY_EXPR(Mult);
GET_TYPE_BINARY_EXPR(Or);
GET_TYPE_BINARY_EXPR(Sub);
GET_TYPE_BINARY_EXPR(Add);
GET_TYPE_BINARY_EXPR_BOOL(Eq);
GET_TYPE_BINARY_EXPR_BOOL(Neq);
GET_TYPE_BINARY_EXPR_BOOL(Gt);
GET_TYPE_BINARY_EXPR_BOOL(Lt);
GET_TYPE_BINARY_EXPR_BOOL(Gte);
GET_TYPE_BINARY_EXPR_BOOL(Lte);

/* End of expression Get Type*/

/* Begin statement evaluate semantic*/

void ExpressionStatement::evaluateSemantic(){
    this->expr->getType();
}

void IfStatement::evaluateSemantic(){
}

void WhileStatement::evaluateSemantic(){
}

void ForStatement::evaluateSemantic(){
}

void FunctionDeclarationStatement::evaluateSemantic(){
}

void VarDeclarationStatement::evaluateSemantic(){
}

void AssignationStatement::evaluateSemantic(){
}

void PrintStmt::evaluateSemantic(){
}

void MainStmt::evaluateSemantic(){
}