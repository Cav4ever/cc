#include "redmi.h"

Redmi::Redmi(string name)
{
    this->name = name;
}
void Redmi::chargeWithTypeC()
{
    cout<<name <<" charge with typec." <<endl;
}