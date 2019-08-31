#include <iostream>
#include "concretePrototype.h"

using std::cout;
using std::endl;

ConcretePrototype::ConcretePrototype(const char *name):Prototype(name)
{
    //
    cout << "Consturtor: ConcretePrototype::ConcretePrototype(const char *name)" << endl;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &obj):Prototype(obj)
{
    //
    cout << "Copy Consturtor: ConcretePrototype::ConcretePrototype(const ConcretePrototype &obj)" << endl;
}

ConcretePrototype &ConcretePrototype::operator=(const ConcretePrototype &obj)
{
    cout << "Overload assignment operator: ConcretePrototype &ConcretePrototype::operator=(const ConcretePrototype &obj)" << endl;
    if (this == &obj) {
        return *this;
    }

    Prototype::operator=(obj);
    //static_cast<Animal &>(*this)=obj;

    return *this;
}

ConcretePrototype::~ConcretePrototype()
{
    //
    cout << "Desturtor: ConcretePrototype::~ConcretePrototype()" << endl;
}

Prototype *ConcretePrototype::clone() const
{
    cout << "This is in ConcretePrototype::clone" << endl;
    return new ConcretePrototype(*this);
}