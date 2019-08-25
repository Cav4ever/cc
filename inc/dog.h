#ifndef _DOG_H
#define _DOG_H

#include "animal.h"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const char *name, int shoutNum);
        Dog(const Dog &obj);
        Dog &operator= (const Dog &obj);
        virtual ~Dog();
        virtual void shout();
};

#endif