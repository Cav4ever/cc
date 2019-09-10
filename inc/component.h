#ifndef _COMPONENT_H
#define _COMPONENT_H

#include <iostream>
#include <string>
using namespace std;

class Component
{
    protected:
        string name;
    public:
        Component(string name);
        virtual void add(Component *component) = 0;
        virtual void remove(Component *component) = 0;
        virtual void Display(int depth) = 0;
        virtual void showDuty() = 0;
};

#endif