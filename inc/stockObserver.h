#ifndef _STOCK_OBSERVER_H
#define _STOCK_OBSERVER_H

#include "observer.h"

class StockObserver: public Observer
{
    public:
        StockObserver(Subject *subject, string name);
        virtual void update();
};

#endif