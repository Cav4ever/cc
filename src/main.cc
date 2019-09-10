#include "leaf.h"
#include "composite.h"

int main()
{
    Composite root("root");
    Composite part1("part1");
    Composite part2("part2");
    Leaf leaf1("leaf1");
    Leaf leaf2("leaf2");
    Leaf leaf3("leaf3");
    Leaf leaf4("leaf4");
    Leaf leaf5("leaf5");
    Leaf leaf6("leaf6");

    root.add(&leaf1);
    root.add(&leaf2);
    part1.add(&leaf3);
    part1.add(&leaf4);
    part2.add(&leaf5);
    part2.add(&leaf6);
    root.add(&part1);
    root.add(&part2);

    root.remove(&part1);
    
    cout<<"struct:" <<endl;
    root.Display(1);

    cout<<"duty:" <<endl;
    root.showDuty();    

    return 0;
}