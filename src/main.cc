#include "concreteHandler1.h"
#include "concreteHandler2.h"

int main()
{
    int request = 6;
    Handler *handler2 = new ConcreteHandler2(NULL);
    Handler *handler1 = new ConcreteHandler1(handler2);

    handler1->handleRequest(request);
    request = 15;
    handler1->handleRequest(request);
    request = 23;
    handler1->handleRequest(request);

    delete handler1;
    delete handler2;
    return 0;
}
