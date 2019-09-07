#ifndef _OPERATION_DEPARTMENT_H
#define _OPERATION_DEPARTMENT_H

#include "department.h"

class OperationDepartment
{
    public:
        virtual void insertDepartment(Department department)=0;
        virtual Department *getDepartment(int id)=0;
};

#endif