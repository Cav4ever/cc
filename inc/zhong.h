#ifndef _ZHONG_H
#define _ZHONG_H

#include "state.h"

class Zhong: public State
{
    public:
        virtual void handle(Student *student);
};

#endif