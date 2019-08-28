#include "addFactory.h"
#include "operationAdd.h"

Operation *AddFactory::createOperate()
{
    Operation *oper = new OperationAdd();
    return oper;
}