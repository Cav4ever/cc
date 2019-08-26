#include <iostream>
#include <string.h>
#include "animal.h"

using std::cout;
using std::endl;

Animal::Animal()
{
    cout << "Consturtor: Animal::Animal()" << endl;
    char default_name[] = "no name";
    name = new char(strlen(default_name) + 1);
    strcpy(name, default_name);
    shoutNum = 0;
}

Animal::Animal(const char *name, int shoutNum)
{
    cout << "Consturtor: Animal::Animal(const char *name, int shoutNum)" << endl;
    this->name = new char(strlen(name) + 1);
    strcpy(this->name, name);
    this->shoutNum = shoutNum;
}

Animal::Animal(const Animal &obj)
{
    cout << "Copy Consturtor: Animal::Animal(const Animal &obj)" << endl;
    name = new char(strlen(obj.name) + 1);
    strcpy(name, obj.name);
    shoutNum = obj.shoutNum;
}

Animal &Animal::operator=(const Animal &obj)
{
    cout << "Overload assignment operator: Animal &Animal::operator=(const Animal &obj)" << endl;
    if (this == &obj) {
        return *this;
    }
    delete []name;
    name = new char(strlen(obj.name) + 1);
    strcpy(name, obj.name);
    shoutNum = obj.shoutNum;

    return *this;
}

Animal::~Animal()
{
    cout << "Desturtor: Animal::~Animal()" << endl;
    delete []name;
}

int Animal::getShoutNum()
{
    return shoutNum;
}

void Animal::setShoutNum(int shoutNum)
{
    this->shoutNum = shoutNum;
}