#ifndef _OPERATION_FACTORY_H
#define _OPERATION_FACTORY_H

#include "operation.h"

class OperationFactory
{
    public:
        Operation *createOperate(char c);
};

#endif