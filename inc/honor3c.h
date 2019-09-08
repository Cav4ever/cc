#ifndef _HONOR3C_H
#define _HONOR3C_H

#include "phone.h"

class Honor3c: public Phone
{
    public:
        Honor3c(string name);
        virtual void chargeWithMiniUSB();
};

#endif