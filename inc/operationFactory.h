#ifndef _OPERATION_FACTORY_H
#define _OPERATION_FACTORY_H

#include "openrationUser.h"
#include "openrationDepartment.h"

class OperationFactory
{
    public:
        virtual OperationUser *createUser()=0;
        virtual OperationDepartment *createDepartment()=0;
};

#endif