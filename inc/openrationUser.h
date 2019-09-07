#ifndef _OPERATION_USER_H
#define _OPERATION_USER_H

#include "user.h"

class OperationUser
{
    public:
        virtual void insertUser(User user)=0;
        virtual User *getUser(int id)=0;
};

#endif