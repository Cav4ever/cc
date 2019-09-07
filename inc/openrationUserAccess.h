#ifndef _OPERATION_USER_ACCESS_H
#define _OPERATION_USER_ACCESS_H

#include "openrationUser.h"

class OperationUserAccess: public OperationUser
{
    public:
        virtual void insertUser(User user);
        virtual User *getUser(int id);
};

#endif