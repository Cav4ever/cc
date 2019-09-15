#include "concreteColleague1.h"
#include "concreteColleague2.h"
#include "concreteMediator.h"

int main()
{
    Mediator *med = new ConcreteMediator();
    Colleague *c1 = new ConcreteColleague1(med);
    Colleague *c2 = new ConcreteColleague2(med);

    med->setColls(c1, c2);
    c1->send("Will you merry me.");
    c2->send("I'd love to.");

    delete med;
    delete c1;
    delete c2;
    return 0;
}
