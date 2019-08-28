#include "divFactory.h"
#include "operationDiv.h"

Operation *DivFactory::createOperate()
{
    Operation *oper = new OperationDiv();
    return oper;
}
