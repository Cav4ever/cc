#include "concreteHandler2.h"

ConcreteHandler2::ConcreteHandler2(Handler *handler): Handler(handler)
{
    //
}

void ConcreteHandler2::handleRequest(int request)
{
    if (request >= 10 && request < 20) {
        cout<<"OK by ConcreteHandler2." <<endl;
    } else {
        cout<<"NO by ConcreteHandler2." <<endl;
    }
}

