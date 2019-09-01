#include "facade.h"
#include "iostream"

Facade::Facade()
{
    std::cout<< "This is in Facade::Facade()" << std::endl;
}

void Facade::method()
{
    subSystemA.methodA();
    subSystemB.methodB();
}

Facade::~Facade()
{
    std::cout<< "This is in Facade::~Facade()" << std::endl;
}