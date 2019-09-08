#ifndef _PHONE_H
#define _PHONE_H

#include <iostream>
using namespace std;

class Phone
{
    protected:
        string name;
    public:
        Phone(string name);
        Phone();
        virtual void chargeWithMiniUSB() = 0;
};

#endif