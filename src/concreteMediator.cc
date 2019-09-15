#include "concreteMediator.h"
#include "colleague.h"

void ConcreteMediator::send(string msg, Colleague *coll)
{
    if (coll == coll1) {
        coll2->notify(msg);
    } else {
        coll1->notify(msg);
    }
}