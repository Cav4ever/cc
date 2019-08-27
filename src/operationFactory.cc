#include <iostream>
#include "operationFactory.h"
#include "operationAdd.h"
#include "operationSub.h"
#include "operationMul.h"
#include "operationDiv.h"

Operation *OperationFactory::createOperate(char c)
{
    Operation *oper = NULL;
    switch (c) {
    case '+':
        oper = new OperationAdd();
        break;
    case '-':
        oper = new OperationSub();
        break;
    case '*':
        oper = new OperationMul();
        break;
    case '/':
        oper = new OperationDiv();
        break;
    default:
        break;
    }
    return oper;
}