#ifndef _BOSS_H
#define _BOSS_H

#include "subject.h"

class Boss: public Subject
{
    public:
        virtual void setState();
};

#endif