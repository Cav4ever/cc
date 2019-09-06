#ifndef _NBA_OBSERVER_H
#define _NBA_OBSERVER_H

#include "observer.h"

class NbaObserver: public Observer
{
    public:
        NbaObserver(Subject *subject, string name);
        virtual void update();
};

#endif