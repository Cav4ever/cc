#ifndef _CONCRETE_DECORATORB_H
#define _CONCRETE_DECORATORB_H

#include "decorator.h"

class ConcreteDecoratorB: public Decorator
{
    public:
        ConcreteDecoratorB(Component *com);
        void operation();
        void addBehavior();
};

#endif