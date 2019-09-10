#include "composite.h"

Composite::Composite(string name): Component(name)
{
    //
}

void Composite::add(Component *component)
{
    comList.push_back(component);
}

void Composite::remove(Component *component)
{
    comList.remove(component);
}

void Composite::Display(int depth)
{
    int i;
    list<Component *>::iterator iter = comList.begin();
    for (i = 0; i < depth; i++) {
        cout<<"-";
    }
    cout<<name <<endl;
    
    while (iter != comList.end()) {
        (*iter)->Display(depth + 2);
        iter++;
    }
}

void Composite::showDuty()
{
    list<Component *>::iterator iter = comList.begin();
    while (iter != comList.end()) {
        (*iter)->showDuty();
        iter++;
    }
}