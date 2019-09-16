#ifndef _FLYWEIGHT_H
#define _FLYWEIGHT_H

#include <iostream>
#include <string>

using namespace std;

class Flyweight
{
    protected:
        string key;
    public:
        Flyweight(string key);
        virtual void operation(int extrainsic) = 0;
        string &getKey();
};

#endif