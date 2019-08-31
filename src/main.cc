#include "concretePrototype.h"

int main()
{
    Prototype *pro = new ConcretePrototype("Kouwq");
    Prototype *pro1 = pro->clone();
    pro1->setName("LBJ23");

    delete pro;
    delete pro1;

    return 0;
}