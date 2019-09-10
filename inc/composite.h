#ifndef _COMPOSITE_H
#define _COMPOSITE_H

#include "component.h"
#include <list>

class Composite: public Component
{
    private:
        list<Component *> comList;
    public:
        Composite(string name);
        virtual void add(Component *component);
        virtual void remove(Component *component);
        virtual void Display(int depth);
        virtual void showDuty();
};

#endif