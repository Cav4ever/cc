#ifndef _CONCRETE_COLLEAGUE1_H
#define _CONCRETE_COLLEAGUE1_H

#include "colleague.h"

class ConcreteColleague1: public Colleague
{
    public:
        ConcreteColleague1(Mediator *med);
        virtual void send(string msg);
        virtual void notify(string msg);
};

#endif