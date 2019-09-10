#ifndef _LEAF_H
#define _LEAF_H

#include "component.h"

class Leaf: public Component
{
    public:
        Leaf(string name);
        virtual void add(Component *component);
        virtual void remove(Component *component);
        virtual void Display(int depth);
        virtual void showDuty();
};

#endif