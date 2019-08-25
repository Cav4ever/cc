#ifndef _CAT_H
#define _CAT_H

#include "animal.h"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const char *name, int shoutNum);
        Cat(const Cat &obj);
        Cat &operator= (const Cat &obj);
        virtual ~Cat();
        virtual void shout();
};

#endif