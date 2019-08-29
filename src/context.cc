#include <iostream>
#include "context.h"
#include "operationAdd.h"
#include "operationSub.h"
#include "operationMul.h"
#include "operationDiv.h"

Context::Context(char c)
{
    oper = NULL;
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
    if (NULL != oper) {
        oper->setNumber(0, 0);
    }
}

void Context::getResult(int numberA, int numberB)
{
    oper->setNumber(numberA, numberB);
    oper->getResult();
}

Context::~Context()
{
    delete []oper;
}
