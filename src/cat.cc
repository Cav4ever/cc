#include <iostream>
#include <string.h>
#include "animal.h"
#include "cat.h"

using std::cout;
using std::endl;

Cat::Cat()
{
    //
    cout << "Consturtor: Cat::Cat()" << endl;
}

Cat::Cat(const char *name, int shoutNum):Animal(name, shoutNum)
{
    //
    cout << "Consturtor: Cat::Cat(const char *name, int shoutNum)" << endl;
}

Cat::Cat(const Cat &obj):Animal(obj)
{
    //
    cout << "Copy Consturtor: Cat::Cat(const Cat &obj)" << endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    cout << "Overload assignment operator: Cat &Cat::operator=(const Cat &obj)" << endl;
    if (this == &obj) {
        return *this;
    }

    Animal::operator=(obj);
    //static_cast<Animal &>(*this)=obj;

    return *this;
}

Cat::~Cat()
{
    //
    cout << "Desturtor: Cat::~Cat()" << endl;
}

void Cat::shout()
{
    int i;
    cout << "My name is: " << name << endl;
    for (i = 0; i < shoutNum; i++) {
        cout << "miao" << endl;
    }
}