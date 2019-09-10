#include "leaf.h"

Leaf::Leaf(string name): Component(name)
{
    //
}

void Leaf::add(Component *component)
{
    cout<<"cannot add to a leaf." <<endl;
}

void Leaf::remove(Component *component)
{
    cout<<"cannot remove from a leaf." <<endl;
}

void Leaf::Display(int depth)
{
    int i;
    for (i = 0; i < depth; i++) {
        cout<<"-";
    }
    cout<<name <<endl;
}

void Leaf::showDuty()
{
    cout<<name <<"work as a leaf"<<endl;
}