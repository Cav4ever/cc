#ifndef _BUJIGE_H
#define _BUJIGE_H

#include "state.h"

class Bujige: public State
{
    public:
        virtual void handle(Student *student);
};

#endif