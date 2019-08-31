#ifndef _CONCRETE_PROTOTYPE_H
#define _CONCRETE_PROTOTYPE_H

#include "prototype.h"

class ConcretePrototype: public Prototype
{
    public:
        ConcretePrototype(const char *name);
        ConcretePrototype(const ConcretePrototype &obj);
        ConcretePrototype &operator= (const ConcretePrototype &obj);
        ~ConcretePrototype();
        Prototype *clone() const;
};

#endif