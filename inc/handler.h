#ifndef _HANDLER_H
#define _HANDLER_H

#include <iostream>
#include <string>

using namespace std;

class Handler
{
    protected:
        Handler *handler;
    public:
        Handler(Handler *handler);
        virtual void handleRequest(int request) = 0;
};

#endif
