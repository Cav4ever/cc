#include "concreteColleague1.h"

ConcreteColleague1::ConcreteColleague1(Mediator *med): Colleague(med)
{
    //
}

void ConcreteColleague1::send(string msg)
{
    med->send(msg, this);
}

void ConcreteColleague1::notify(string msg)
{
    cout<<"ConcreteColleague1 got the message: " <<msg <<endl;
}