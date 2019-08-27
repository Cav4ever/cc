#ifndef _OPERATION_Div_H
#define _OPERATION_Div_H

#include "operation.h"

class OperationDiv : public Operation
{
    public:
        OperationDiv();
        OperationDiv(int numberA, int numberB);
        virtual void getResult();
};

#endif