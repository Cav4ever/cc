#include <iostream>
#include <string.h>
#include "animal.h"
#include "cat.h"

using std::cout;
using std::endl;

Cat::Cat():Animal()
{
    //
}

Cat::Cat(const char *name, int shoutNum):Animal(name, shoutNum)
{
    //
}

Cat::Cat(const Cat &obj):Animal(obj)
{
    //
}

Cat &Cat::operator=(const Cat &obj)
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

Cat::~Cat()
{
    //
}

void Cat::shout()
{
    int i;
    cout << "My name is: " << name << endl;
    for (i = 0; i < shoutNum; i++) {
        cout << "miao" << endl;
    }
}