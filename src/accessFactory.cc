#include "accessFactory.h"
#include "openrationUserAccess.h"
#include "openrationDepartmentAccess.h"

OperationUser *AccessFactory::createUser()
{
    return new OperationUserAccess();
}

OperationDepartment *AccessFactory::createDepartment()
{
    return new OperationDepartmentAccess();
}