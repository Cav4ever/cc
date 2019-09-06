#include "stockObserver.h"

StockObserver::StockObserver(Subject *subject, string name):Observer(subject, name)
{
    //
}

void StockObserver::update()
{
    observerState = subject->getState();
    cout<<name <<"! Please close your ActionMovie website!!! " <<observerState <<endl;
}