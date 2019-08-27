#include <iostream>
#include "operationAdd.h"

using std::cout;
using std::endl;

OperationAdd::OperationAdd()
{
    //
}

OperationAdd::OperationAdd(int numberA, int numberB):Operation(numberA, numberB)
{
    //
}

void OperationAdd::getResult()
{
    cout<< numberA << "+" << numberB << "=" << numberA + numberB << endl;
}