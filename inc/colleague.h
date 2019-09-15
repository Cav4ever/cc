#ifndef _COLLEAGUE_H
#define _COLLEAGUE_H

#include "mediator.h"

class Colleague
{
    protected:
        Mediator *med;
    public:
        Colleague(Mediator *med);
        virtual void send(string msg) = 0;
        virtual void notify(string msg) = 0;
};

#endif