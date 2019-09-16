#include "flyweightFactory.h"

int main()
{
    FlyweightFactory ff;
    Flyweight *f1 = ff.getFlyweight("James");
    f1->operation(23);
    Flyweight *f2 = ff.getFlyweight("James");
    f2->operation(0);

    if (f1 == f2) {
        cout <<"f1 == f2" <<endl;
        delete f1;
    } else {
        cout <<"f1 != f2" <<endl;
        delete f1;
        delete f2;
    }

    return 0;
}