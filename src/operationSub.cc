#include <iostream>
#include "operationSub.h"

using std::cout;
using std::endl;

OperationSub::OperationSub()
{
    //
}

OperationSub::OperationSub(int numberA, int numberB):Operation(numberA, numberB)
{
    //
}

void OperationSub::getResult()
{
    cout<< numberA << "-" << numberB << "=" << numberA - numberB << endl;
}