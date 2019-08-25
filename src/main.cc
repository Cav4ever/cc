#include "cat.h"
#include "dog.h"

int main()
{
    Animal *animal;
    Cat cat("MM", 3);
    Dog dog("WW", 6);

    animal = &cat;
    animal->shout();

    animal = &dog;
    animal->shout();

    return 0;
}
