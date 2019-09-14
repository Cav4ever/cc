#ifndef _CONCRETE_HANDLER2_H
#define _CONCRETE_HANDLER2_H

#include "handler.h"

class ConcreteHandler2: public Handler
{
    public:
        ConcreteHandler2(Handler *handler);
        virtual void handleRequest(int request);
};

#endif
