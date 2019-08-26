#include "cat.h"
#include "dog.h"

int main()
{
    Animal *animal;
    Cat cat("MM", 3);
    Dog dog("WW", 6);
    Cat cat2("XiaoBiao", 4);
    cat = cat2;
    Cat catRef("Caty", 6);
    Animal &animalRef = catRef;

    animal = &cat;
    animal->shout();

    animal = &dog;
    animal->shout();

    animalRef.shout();

    return 0;
}

/* int main()
{
    Cat cat1;
    Cat cat2("MM", 3);
    Cat cat3 = cat1;
    cat3 = cat2;
    return 0;
} */
