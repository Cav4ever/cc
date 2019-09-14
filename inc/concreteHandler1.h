#ifndef _CONCRETE_HANDLER1_H
#define _CONCRETE_HANDLER1_H

#include "handler.h"

class ConcreteHandler1: public Handler
{
    public:
        ConcreteHandler1(Handler *handler);
        virtual void handleRequest(int request);
};

#endif
