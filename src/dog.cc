#include <iostream>
#include <string.h>
#include "animal.h"
#include "dog.h"

using std::cout;
using std::endl;

Dog::Dog()
{
    //
    cout << "Consturtor: Dog::Dog()" << endl;
}

Dog::Dog(const char *name, int shoutNum):Animal(name, shoutNum)
{
    //
    cout << "Consturtor: Dog::Dog(const char *name, int shoutNum)" << endl;
}

Dog::Dog(const Dog &obj):Animal(obj)
{
    //
    cout << "Copy Consturtor: Dog::Dog(const Cat &obj)" << endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    cout << "Overload assignment operator: Dog &Dog::operator=(const Dog &obj)" << endl;
    if (this == &obj) {
        return *this;
    }

    Animal::operator=(obj);
    //static_cast<Animal &>(*this)=obj;

    return *this;
}

Dog::~Dog()
{
    //
    cout << "Desturtor: Dog::~Dog()" << endl;
}

void Dog::shout()
{
    int i;
    cout << "My name is: " << name << endl;
    for (i = 0; i < shoutNum; i++) {
        cout << "wang" << endl;
    }
}