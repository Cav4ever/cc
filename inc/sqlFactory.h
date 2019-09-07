#ifndef _SQL_FACTORY_H
#define _SQL_FACTORY_H

#include "operationFactory.h"

class SqlFactory: public OperationFactory
{
    public:
        virtual OperationUser *createUser();
        virtual OperationDepartment *createDepartment();
};

#endif