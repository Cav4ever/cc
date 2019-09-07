#include "sqlFactory.h"
#include "openrationUserSql.h"
#include "openrationDepartmentSql.h"

OperationUser *SqlFactory::createUser()
{
    return new OperationUserSql();
}

OperationDepartment *SqlFactory::createDepartment()
{
    return new OperationDepartmentSql();
}