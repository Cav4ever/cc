#include "concreteHandler1.h"

ConcreteHandler1::ConcreteHandler1(Handler *handler): Handler(handler)
{
    //
}

void ConcreteHandler1::handleRequest(int request)
{
    if (request >= 0 && request < 10) {
        cout<<"OK by ConcreteHandler1." <<endl;
    } else {
        handler->handleRequest(request);
    }
}

