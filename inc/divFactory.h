#ifndef _DIV_FACTORY_H
#define _DIV_FACTORY_H

#include "operationFactory.h"
#include "operation.h"

class DivFactory: public OperationFactory
{
    public:
        virtual Operation *createOperate();
};

#endif