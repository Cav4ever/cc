#include "concreteColleague2.h"

ConcreteColleague2::ConcreteColleague2(Mediator *med): Colleague(med)
{
    //
}

void ConcreteColleague2::send(string msg)
{
    med->send(msg, this);
}

void ConcreteColleague2::notify(string msg)
{
    cout<<"ConcreteColleague2 got the message: " <<msg <<endl;
}