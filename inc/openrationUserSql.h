#ifndef _OPERATION_USER_SQL_H
#define _OPERATION_USER_SQL_H

#include "openrationUser.h"

class OperationUserSql: public OperationUser
{
    public:
        virtual void insertUser(User user);
        virtual User *getUser(int id);
};

#endif