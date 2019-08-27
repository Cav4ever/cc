#ifndef _OPERATION_SUB_H
#define _OPERATION_SUB_H

#include "operation.h"

class OperationSub : public Operation
{
    public:
        OperationSub();
        OperationSub(int numberA, int numberB);
        virtual void getResult();
};

#endif