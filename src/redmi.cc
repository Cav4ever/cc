#include "redmi.h"

Redmi::Redmi(Soft *soft): Phone(soft)
{
    //
}

void Redmi::run()
{
    soft->run();
}