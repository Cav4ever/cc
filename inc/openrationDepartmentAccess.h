#ifndef _OPERATION_DEPARTMENT_ACCESS_H
#define _OPERATION_DEPARTMENT_ACCESS_H

#include "openrationDepartment.h"

class OperationDepartmentAccess: public OperationDepartment
{
    public:
        virtual void insertDepartment(Department department);
        virtual Department *getDepartment(int id);
};

#endif