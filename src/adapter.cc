#include "adapter.h"

Adapter::Adapter(Redmi *redmi):Phone()
{
    this->redmi = redmi;
}

void Adapter::chargeWithMiniUSB()
{
    redmi->chargeWithTypeC();
}