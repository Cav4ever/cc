#ifndef _CONCRETE_FLYWEIGHT_H
#define _CONCRETE_FLYWEIGHT_H

#include "flyweight.h"

class ConcreteFlyweight: public Flyweight
{
    public:
        ConcreteFlyweight(string key);
        virtual void operation(int extrainsic);
};

#endif