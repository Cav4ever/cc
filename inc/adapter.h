#ifndef _ADAPTER_H
#define _ADAPTER_H

#include "phone.h"
#include "redmi.h"

class Adapter: public Phone
{
    private:
        Redmi *redmi;
    public:
        Adapter(Redmi *redmi);
        virtual void chargeWithMiniUSB();
};

#endif