#include <iostream>
#include "operationMul.h"

using std::cout;
using std::endl;

OperationMul::OperationMul()
{
    //
}

OperationMul::OperationMul(int numberA, int numberB):Operation(numberA, numberB)
{
    //
}

void OperationMul::getResult()
{
    cout<< numberA << "*" << numberB << "=" << numberA * numberB << endl;
}