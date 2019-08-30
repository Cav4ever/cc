#include <iostream>
#include "concreteDecoratorB.h"

ConcreteDecoratorB::ConcreteDecoratorB(Component *com): Decorator(com)
{
    //
}

void ConcreteDecoratorB::operation()
{
    std::cout<< "this is in the operation() of ConcreteDecoratorB" << std::endl;
    if (NULL != com) {
        com->operation();
    }
    addBehavior();
}

void ConcreteDecoratorB::addBehavior()
{
    std::cout<< "this is in the addBehavior() of ConcreteDecoratorB" << std::endl;
}