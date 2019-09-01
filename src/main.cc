#include "concreteA.h"
#include "concreteB.h"

int main()
{
    Template *t = new ConcreteA();
    t->primitiveMethod();
    delete t;
    t = new ConcreteB();
    t->primitiveMethod();
    delete t;

    return 0;
}