#include "subSystemA.h"
#include "iostream"

SubSystemA::SubSystemA()
{
    std::cout<< "This is in SubSystemA::SubSystemA()" << std::endl;
}

void SubSystemA::methodA()
{
    std::cout<< "This is SubSystemA::methodA" << std::endl;
}

SubSystemA::~SubSystemA()
{
    std::cout<< "This is in SubSystemA::~SubSystemA()" << std::endl;
}