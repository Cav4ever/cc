#ifndef _SUB_FACTORY_H
#define _SUB_FACTORY_H

#include "operationFactory.h"
#include "operation.h"

class SubFactory: public OperationFactory
{
    public:
        virtual Operation *createOperate();
};

#endif