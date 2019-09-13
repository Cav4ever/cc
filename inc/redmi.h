#ifndef _REDMI_H
#define _REDMI_H

#include "phone.h"

class Redmi: public Phone
{
     public:
        Redmi(Soft *soft);
        virtual void run();
};

#endif