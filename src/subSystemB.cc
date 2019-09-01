#include "subSystemB.h"
#include "iostream"

SubSystemB::SubSystemB()
{
    std::cout<< "This is in SubSystemB::SubSystemB()" << std::endl;
}

void SubSystemB::methodB()
{
    std::cout<< "This is SubSystemB::methodB" << std::endl;
}

SubSystemB::~SubSystemB()
{
    std::cout<< "This is in SubSystemB::~SubSystemB()" << std::endl;
}