#ifndef _CONCRETE_BUILDER1_H
#define _CONCRETE_BUILDER1_H

#include "builder.h"

class ConcreteBuilder1: public Builder
{
    public:
        virtual void buildPart1();
		virtual void buildPart2();
		virtual Product &getResult();
};

#endif