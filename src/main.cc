#include "operationFactory.h"

int main()
{
   OperationFactory operationFactory;
   Operation *operation = operationFactory.createOperate('+');
   operation->setNumber(16, 7);
   operation->getResult();
   delete operation;

    return 0;
}