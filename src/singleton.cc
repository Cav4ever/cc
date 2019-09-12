#include <iostream>
#include <string.h>
#include "singleton.h"

using std::cout;
using std::endl;

Singleton *Singleton::instance = NULL;

Singleton::Singleton()
{
    cout<<"Singleton::Singleton()" <<endl;
}

Singleton *Singleton::getInstance()
{
    if (NULL == instance) {
        instance = new Singleton();
    }
    return instance;
}
