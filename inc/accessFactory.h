#ifndef _ACCESS_FACTORY_H
#define _ACCESS_FACTORY_H

#include "operationFactory.h"

class AccessFactory: public OperationFactory
{
    public:
        virtual OperationUser *createUser();
        virtual OperationDepartment *createDepartment();
};

#endif