#ifndef _FACADE_H
#define _FACADE_H

#include "subSystemA.h"
#include "subSystemB.h"

class Facade
{
    private:
        SubSystemA subSystemA;
        SubSystemB subSystemB;
    public:
        Facade();
        void method();
        ~Facade();
};

#endif