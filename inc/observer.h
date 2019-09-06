#ifndef _OBSERVER_H
#define _OBSERVER_H

#include "subject.h"

class Observer
{
    protected:
        string name;
        string observerState;
        Subject *subject;
    public:
        Observer(Subject *subject, string name);
        virtual void update() = 0;
};

#endif