#ifndef _JIGE_H
#define _JIGE_H

#include "state.h"

class Jige: public State
{
    public:
        virtual void handle(Student *student);
};

#endif