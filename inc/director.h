#ifndef _DIRECTOR_H
#define _DIRECTOR_H

#include "builder.h"

class Director
{
    public:
        void construct(Builder *builder);
};

#endif