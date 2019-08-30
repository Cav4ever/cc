#include <iostream>
#include "concreteDecoratorA.h"

ConcreteDecoratorA::ConcreteDecoratorA(Component *com): Decorator(com)
{
    //
}

void ConcreteDecoratorA::operation()
{   
    std::cout<< "this is in the operation() of ConcreteDecoratorA" << std::endl;
    if (NULL != com) {
        com->operation();
    }
    addBehavior();
}

void ConcreteDecoratorA::addBehavior()
{
    std::cout<< "this is in the addBehavior() of ConcreteDecoratorA" << std::endl;
}