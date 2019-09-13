#include "game.h"
#include "address.h"
#include "redmi.h"

int main()
{
    //Soft *soft = new Game();
    Soft *soft = new Address();
    Phone *phone = new Redmi(soft);
    phone->run();

    delete soft;
    delete phone;
    return 0;
}