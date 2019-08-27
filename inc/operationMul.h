#ifndef _OPERATION_MUL_H
#define _OPERATION_MUL_H

#include "operation.h"

class OperationMul : public Operation
{
    public:
        OperationMul();
        OperationMul(int numberA, int numberB);
        virtual void getResult();
};

#endif