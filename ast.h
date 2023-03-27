
#include <string>
#include "constants.h"
#include <list>
#include <vector>


using namespace std;

class Node
{
    public:
        int line;
        int column;
        Node(int line, int column)
        {
            this->line = line;
            this->column = column;
        }
        virtual void print() = 0;
};

class ComplexType{
    public:
        ComplexType(PrimitiveType primitiveType, bool isArray){
            this->primitiveType = primitiveType;
            this->isArray = isArray;
        }
        PrimitiveType primitiveType;
        bool isArray;
};

class ArrayType : public ComplexType{
    public:
        ArrayType(int start, int end, PrimitiveType primitiveType)
            : ComplexType(primitiveType, true){
            this->start = start;
            this->end = end;
            this->primitiveType = primitiveType;
        }
        int start, end;
        PrimitiveType primitiveType;
};

class Expression : public Node
{
    public:
        Expression(int line, int column) : Node(line, column)
        {
            
        }
        virtual void print() = 0;
        virtual PrimitiveType getType() = 0;
};

class FloatExpr : public Expression{
    public:
        FloatExpr(float value, int line, int column) : Expression(line, column){
            this->value = value;
        }
        float value;
        void print();
        PrimitiveType getType();
};

class BoolExpr : public Expression{
    public:
        BoolExpr(bool value, int line, int column) : Expression(line, column){
            this->value = value;
        }
        bool value;
        void print();
        PrimitiveType getType();
};

class StringExpr: public Expression
{
    public:
        StringExpr(string value, int line, int column) : Expression(line,column)
        {
            this->value = value;
        }
        string value;
        void print();
        PrimitiveType getType();
};

class IDExpr : public Expression{
    public:
        IDExpr(string id, int line, int column) : Expression(line, column){
            this->id = id;
            this->line = line;
            this->column = column;
        }
        string id;
        void print();
        PrimitiveType getType();
};

class IntExpr: public Expression
{
    public:
        IntExpr(int value, int line, int colum) : Expression(line,column)
        {
            this->value = value;
        }
        int value;
        void print();
        PrimitiveType getType();
};

class ArrayExpr: public Expression
{
    public:
        ArrayExpr(IDExpr * idExpr, Expression * index, int line, int column) : Expression(line, column)
        {
            this-> id = idExpr;
            this-> index = index;
        }
        IDExpr * id;
        Expression * index;
        void print();
        PrimitiveType getType();
};

class CommentExpr: public Expression
{
    public:
        CommentExpr(string value, int line, int column) : Expression(line, column)
        {
            this-> value = value;
        }
        string value;
        void print();
        PrimitiveType getType();
};


class UnaryExpr : public Expression{
    public:
        UnaryExpr(UnaryOperator op, Expression * expr, int line, int column) : 
            Expression(line, column){
            this->op = op;
            this->expr = expr;
        }
        UnaryOperator op;
        Expression * expr;
        void print();
        PrimitiveType getType();
};

class BinaryExpr : public Expression{
    public:
        BinaryExpr(Expression * left, Expression * right, int line, int column) : 
            Expression(line, column){
            this->left = left;
            this->right = right;
        }
        Expression * left;
        Expression * right;
        virtual void print() = 0;
        virtual PrimitiveType getType() = 0;
};

#define IMPLEMENT_BINARY_EXPR(name)\
class name##Expr : public BinaryExpr{\
    public: \
        name##Expr(Expression * left, Expression * right, int line, int column): BinaryExpr(left, right, line, column){}\
        void print();\
        PrimitiveType getType();\
};


/*class RangeExpr : public Expression
{
    public:
        RangeExpr(IDExpr* id, Expression * start, Expression * end, int line, int column) : Expression(line, column)
        {
            this-> id = id;
            this-> start = start;
            this-> end = end;
        }
        IDExpr * id;
        Expression * start;
        Expression * end;
};*/

class Statement : public Node{
    public:
        Statement(int line, int column) : Node(line, column){}
        virtual void print() = 0;
        virtual void evaluateSemantic() = 0;
};

class ExpressionStatement : public Statement{
    public:
        ExpressionStatement(Expression * expr, int line, int column)
            : Statement(line, column){
            this->expr = expr;
        }
        Expression * expr;
        void print();
        void evaluateSemantic();
};

class IfStatement : public Statement{
    public:
        IfStatement(Expression * expression, list<Statement * > *trueStatement ,list<Statement * >* falseStatement , int line, int column) :
            Statement(line, column){
            this->expression = expression;
            this->trueStatement = trueStatement;
            this->falseStatement = falseStatement;
        }
        Expression * expression;
        list<Statement * > *trueStatement;
        list<Statement * > *falseStatement;
        void print();
        void evaluateSemantic();
};

class WhileStatement : public Statement
{
    public:
        WhileStatement(Expression * expression, list<Statement * > * statements,bool Do, int line, int column) : Statement(line,column)
        {
            this->expression = expression;
            this->statements = statements;
            this->Do = Do;
        }
        Expression * expression;
        list<Statement * > *statements;
        bool Do;
        void print();
        void evaluateSemantic();
};

class ForStatement : public Statement
{
    public:
        ForStatement(Expression * range, list<Statement * > *statements,int line, int column) : Statement(line, column)
        {
            this->range = range;
            this-> statements = statements;
        }
        Expression * range;
        list<Statement * > * statements;
        void print();
        void evaluateSemantic();
};

class MethodInvocationExpr : public Expression{
    public:
        MethodInvocationExpr(IDExpr * id, list<Expression *> * args, int line, int column)
            : Expression(line, column)
        {
            this-> id = id;
            this->args = args;
        }
        IDExpr * id;
        list<Expression *> * args;
        void print();
        PrimitiveType getType();
};

class Declaration : public Statement{
    public:
        Declaration(int line, int column) : Statement(line, column){}
        virtual void print() = 0;
        virtual void evaluateSemantic() = 0;
};

class FunctionDeclarationStatement : public Declaration{
    public:
        FunctionDeclarationStatement(string id,list<Expression *> * args, PrimitiveType type, list<Statement * > * statements ,int line, int column)
            : Declaration(line, column){
            this->id = id;
            this->args = args;
            this->type = type;
            this-> statements = statements;

        }
        string id;
        list<Expression *> * args;
        PrimitiveType type;
        list<Statement * > *statements;
        void print();
        void evaluateSemantic();
};

class VarDeclarationStatement : public Declaration{
    public:
        VarDeclarationStatement(string id, bool isArray, PrimitiveType  type, Expression * size, int line, int column)
            : Declaration(line, column){
            this->id = id;
            this->type = type;
            this->size = size;
        }
        string id;
        PrimitiveType type;
        Expression * size;
        void print();
        void evaluateSemantic();
};

class AssignationStatement : public Statement
{
    public:
        AssignationStatement(string id, Expression * stmt, Expression * index, int line, int column) : Statement(line,column)
        {
            this->id = id;
            this->stmt = stmt;
            this->index = index;
            this->isArray = index != NULL;
        }
        string id;
        Expression * stmt;
        Expression * index;
        bool isArray;
        void print();
        void evaluateSemantic();
};

class PrintStmt : public Statement
{
    public:
        PrintStmt(Expression * expr, int line, int column) : Statement(line, column)
        {
            this->expr = expr;
        }
        Expression * expr;
        void print();
        void evaluateSemantic();
};

class MainStmt: public Statement
{
    public:
        MainStmt(list<Statement *> * stmts, int line, int column) : Statement(line, column)
        {
            this->stmts = stmts;
        }
        list<Statement * > * stmts;
        void print();
        void evaluateSemantic();
};


IMPLEMENT_BINARY_EXPR(And);
IMPLEMENT_BINARY_EXPR(Mod);
IMPLEMENT_BINARY_EXPR(Div);
IMPLEMENT_BINARY_EXPR(Mult);
IMPLEMENT_BINARY_EXPR(Or);
IMPLEMENT_BINARY_EXPR(Sub);
IMPLEMENT_BINARY_EXPR(Add);
IMPLEMENT_BINARY_EXPR(Eq);
IMPLEMENT_BINARY_EXPR(Neq);
IMPLEMENT_BINARY_EXPR(Gt);
IMPLEMENT_BINARY_EXPR(Lt);
IMPLEMENT_BINARY_EXPR(Gte);
IMPLEMENT_BINARY_EXPR(Lte);