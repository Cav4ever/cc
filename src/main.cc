#include "honor3c.h"
#include "adapter.h"

int main()
{
    Phone *phone = new Honor3c("3c");
    phone->chargeWithMiniUSB();
    delete phone;
    Redmi *redmi = new Redmi("redmi");
    phone = new Adapter(redmi);
    phone->chargeWithMiniUSB();
    delete phone;
    delete redmi;

    return 0;
}