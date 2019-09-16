#ifndef _FLYWEIGHT_FACTORY_H
#define _FLYWEIGHT_FACTORY_H

#include "concreteFlyweight.h"
#include <vector>

class FlyweightFactory
{
    private:
        vector<Flyweight*> pool;
    public:
        Flyweight *getFlyweight(const string &key);
        ~FlyweightFactory();
};

#endif