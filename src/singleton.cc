#include "singleton.h"

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
