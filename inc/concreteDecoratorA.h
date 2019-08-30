#ifndef _CONCRETE_DECORATORA_H
#define _CONCRETE_DECORATORA_H

#include "decorator.h"

class ConcreteDecoratorA: public Decorator
{
    public:
        ConcreteDecoratorA(Component *com);
        void operation();
        void addBehavior();
};

#endif