#include "nbaObserver.h"

NbaObserver::NbaObserver(Subject *subject, string name):Observer(subject, name)
{
    //
}

void NbaObserver::update()
{
    observerState = subject->getState();
    cout<<name <<"! Please close your game!!! " <<observerState <<endl;
}