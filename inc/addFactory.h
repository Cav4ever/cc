#ifndef _ADD_FACTORY_H
#define _ADD_FACTORY_H

#include "operationFactory.h"
#include "operation.h"

class AddFactory: public OperationFactory
{
    public:
        virtual Operation *createOperate();
};

#endif