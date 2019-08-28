#ifndef _OPERATION_FACTORY_H
#define _OPERATION_FACTORY_H

#include "operation.h"

class OperationFactory
{
    public:
        virtual Operation *createOperate()=0;
};

#endif