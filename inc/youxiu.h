#ifndef _YOUXIU_H
#define _YOUXIU_H

#include "state.h"

class Youxiu: public State
{
    public:
        virtual void handle(Student *student);
};

#endif