#ifndef _CONCRETE_MEDIATOR_H
#define _CONCRETE_MEDIATOR_H

#include "mediator.h"

class ConcreteMediator: public Mediator
{
    public:
        virtual void send(string msg, Colleague *coll);
};

#endif