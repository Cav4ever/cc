#include "mulFactory.h"
#include "operationMul.h"

Operation *MulFactory::createOperate()
{
    Operation *oper = new OperationMul();
    return oper;
}
