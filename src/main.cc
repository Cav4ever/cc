#include "addFactory.h"
#include "subFactory.h"
#include "mulFactory.h"
#include "divFactory.h"

int main()
{
   OperationFactory *operationFactory = new AddFactory();
   Operation *operation = operationFactory->createOperate();
   operation->setNumber(16, 7);
   operation->getResult();
   delete operationFactory;
   delete operation;

    return 0;
}