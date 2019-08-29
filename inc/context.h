#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "operation.h"

class Context
{
    private:
        Operation *oper;
    public:
        Context(char c);
        void getResult(int numberA, int numberB);
        ~Context();
};

#endif