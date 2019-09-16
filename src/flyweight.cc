#include "flyweight.h"

Flyweight::Flyweight(string key)
{
    this->key = key;
}

string &Flyweight::getKey()
{
    return key;
}