#ifndef _OPERATION_ADD_H
#define _OPERATION_ADD_H

#include "operation.h"

class OperationAdd : public Operation
{
    public:
        OperationAdd();
        OperationAdd(int numberA, int numberB);
        virtual void getResult();
};

#endif