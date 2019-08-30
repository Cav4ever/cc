#ifndef _DECORATOR_H
#define _DECORATOR_H

#include "component.h"

class Decorator: public Component
{
    protected:
        Component *com;
    public:
        Decorator(Component *com);
        void operation();
};

#endif