#ifndef _MEDIATOR_H
#define _MEDIATOR_H

#include <iostream>
#include <string>

using namespace std;

class Colleague;

class Mediator
{
    protected:
        Colleague *coll1;
        Colleague *coll2;
    public:
        void setColls(Colleague *coll1, Colleague *coll2);
        virtual void send(string msg, Colleague *coll) = 0;
};

#endif