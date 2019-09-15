#ifndef _CONCRETE_COLLEAGUE2_H
#define _CONCRETE_COLLEAGUE2_H

#include "colleague.h"

class ConcreteColleague2: public Colleague
{
    public:
        ConcreteColleague2(Mediator *med);
        virtual void send(string msg);
        virtual void notify(string msg);
};

#endif