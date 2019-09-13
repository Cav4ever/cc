#ifndef _PHONE_H
#define _PHONE_H

#include "soft.h"

class Phone
{
    protected:
        Soft *soft;
     public:
        Phone(Soft *soft);
        virtual void run() = 0;
};

#endif