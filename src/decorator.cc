#include <iostream>
#include "decorator.h"

Decorator::Decorator(Component *com)
{
    this->com = com;
}

void Decorator::operation()
{
    std::cout<< "this is in the operation() of Decorator" << std::endl;
    if (NULL != com) {
        com->operation();
    }
}