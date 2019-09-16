#include "concreteFlyweight.h"

ConcreteFlyweight::ConcreteFlyweight(string key): Flyweight(key)
{
    //
}

void ConcreteFlyweight::operation(int extrainsic)
{
    cout<<"in ConcreteFlyweight: " <<extrainsic <<endl;
}