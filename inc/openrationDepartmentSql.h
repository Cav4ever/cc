#ifndef _OPERATION_DEPARTMENT_SQL_H
#define _OPERATION_DEPARTMENT_SQL_H

#include "openrationDepartment.h"

class OperationDepartmentSql: public OperationDepartment
{
    public:
        virtual void insertDepartment(Department department);
        virtual Department *getDepartment(int id);
};

#endif