#include <iostream>
#include "operationDiv.h"

using std::cout;
using std::endl;

OperationDiv::OperationDiv()
{
    //
}

OperationDiv::OperationDiv(int numberA, int numberB):Operation(numberA, numberB)
{
    //
}

void OperationDiv::getResult()
{
    if (numberB != 0) {
        cout<< numberA << "/" << numberB << "=" << numberA / numberB << endl;
    } else {
        cout<< "numberB can not be 0!!!" << endl;
    }
}