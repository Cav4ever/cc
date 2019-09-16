#include "flyweightFactory.h"

Flyweight *FlyweightFactory::getFlyweight(const string &key)
{
    vector<Flyweight*>::iterator it = pool.begin();
    for (; it != pool.end(); it++) {
        if ((*it)->getKey() == key) {
            cout<<"already created by users" <<endl;
            return *it;
        }
    }
    Flyweight *fw = new ConcreteFlyweight(key);
    pool.push_back(fw);
    return fw;
}

FlyweightFactory::~FlyweightFactory()
{
    //
}