#include "subFactory.h"
#include "operationSub.h"

Operation *SubFactory::createOperate()
{
    Operation *oper = new OperationSub();
    return oper;
}