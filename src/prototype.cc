#include <iostream>
#include <string.h>
#include "prototype.h"

using std::cout;
using std::endl;

Prototype::Prototype(const char *name)
{
    cout << "Consturtor: Prototype::Prototype(const char *name)" << endl;
    this->name = new char(strlen(name) + 1);
    strcpy(this->name, name);
}

Prototype::Prototype(const Prototype &obj)
{
    cout << "Copy Consturtor: Prototype::Prototype(const Prototype &obj)" << endl;
    name = new char(strlen(obj.name) + 1);
    strcpy(name, obj.name);
}

Prototype &Prototype::operator=(const Prototype &obj)
{
    cout << "Overload assignment operator: Prototype &Prototype::operator=(const Prototype &obj)" << endl;
    if (this == &obj) {
        return *this;
    }
    delete []name;
    name = new char(strlen(obj.name) + 1);
    strcpy(name, obj.name);

    return *this;
}

Prototype::~Prototype()
{
    cout << "Desturtor: Prototype::~Prototype()" << endl;
    delete []name;
}

void Prototype::setName(const char *str)
{
    cout << "This is in Prototype::setName" << endl;
    delete []name;
    name = new char(strlen(str) + 1);
    strcpy(name, str);
}