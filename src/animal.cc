#include <string.h>
#include "animal.h"

Animal::Animal()
{
    char default_name[] = "no name";
    name = new char(strlen(default_name) + 1);
    strcpy(name, default_name);
    shoutNum = 0;
}

Animal::Animal(const char *name, int shoutNum)
{
    this->name = new char(strlen(name) + 1);
    strcpy(this->name, name);
    this->shoutNum = shoutNum;
}

Animal::Animal(const Animal &obj)
{
    name = new char(strlen(obj.name) + 1);
    strcpy(name, obj.name);
    shoutNum = obj.shoutNum;
}

Animal &Animal::operator=(const Animal &obj)
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

Animal::~Animal()
{
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