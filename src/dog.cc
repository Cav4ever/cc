#include <iostream>
#include <string.h>
#include "animal.h"
#include "dog.h"

using std::cout;
using std::endl;

Dog::Dog():Animal()
{
    //
}

Dog::Dog(const char *name, int shoutNum):Animal(name, shoutNum)
{
    //
}

Dog::Dog(const Dog &obj):Animal(obj)
{
    //
}

Dog &Dog::operator=(const Dog &obj)
{
    if (this == &obj) {
        return *this;
    }
    delete []name;
    name = new char(strlen(obj.name) + 1);
    strcpy(name, obj.name);
    shoutNum = obj.shoutNum;

    return *this;
}

Dog::~Dog()
{
    //
}

void Dog::shout()
{
    int i;
    cout << "My name is: " << name << endl;
    for (i = 0; i < shoutNum; i++) {
        cout << "wang" << endl;
    }
}