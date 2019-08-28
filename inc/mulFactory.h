#ifndef _MUL_FACTORY_H
#define _MUL_FACTORY_H

#include "operationFactory.h"
#include "operation.h"

class MulFactory: public OperationFactory
{
    public:
        virtual Operation *createOperate();
};

#endif