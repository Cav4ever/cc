#ifndef _BUILDER_H
#define _BUILDER_H

#include "product.h"

class Builder
{
	protected:
		Product product;
    public:
        virtual void buildPart1()=0;
		virtual void buildPart2()=0;
		virtual Product &getResult()=0;
};

#endif