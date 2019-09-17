#include <iostream>
#include <string>

using namespace std;

class Context
{
    private:
        string input;
    public:
        Context(string input) {this->input = input;}
        string &getInput() {return input;}
};

class AbstractExpression
{
     public:
        virtual void interpret(Context *context) = 0;
};

class TerminalExpression: public AbstractExpression
{
     public:
        virtual void interpret(Context *context) {
            cout<<"TerminalExpression: " <<context->getInput() <<endl;
        }
};

class NonterminalExpression: public AbstractExpression
{
     public:
        virtual void interpret(Context *context) {
            cout<<"NonterminalExpression: " <<context->getInput() <<endl;
        }
};

int main()
{
    Context *context = new Context("James");
    AbstractExpression *exp = new TerminalExpression();
    exp->interpret(context);
    delete exp;
    exp = new NonterminalExpression();
    exp->interpret(context);
    delete exp;
    delete context;

    return 0;
}