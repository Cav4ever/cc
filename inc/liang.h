#ifndef _LIANG_H
#define _LIANG_H

#include "state.h"

class Liang: public State
{
    public:
        virtual void handle(Student *student);
};

#endif