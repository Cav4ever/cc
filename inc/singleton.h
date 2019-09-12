#ifndef _SINGLETON_H
#define _SINGLETON_H

#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

class Singleton
{
    private:
        static Singleton *instance;
    protected:
        Singleton();
    public:
        static Singleton *getInstance();
};

#endif