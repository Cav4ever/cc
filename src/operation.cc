#include "operation.h"

Operation::Operation()
{
    numberA = 0;
    numberB = 0;
}

Operation::Operation(int numberA, int numberB)
{
    this->numberA = numberA;
    this->numberB = numberB;
}

void Operation::setNumber(int numberA, int numberB)
{
    this->numberA = numberA;
    this->numberB = numberB;
}