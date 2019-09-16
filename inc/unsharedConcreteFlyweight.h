#ifndef _UNSHARED_CONCRETE_FLYWEIGHT_H
#define _UNSHARED_CONCRETE_FLYWEIGHT_H

#include "flyweight.h"

class UnsharedConcreteFlyweight: public Flyweight
{
    public:
        virtual void operation(int extrainsic);
};

#endif