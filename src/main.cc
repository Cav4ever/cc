#include "concreteAggregate.h"
#include "concreteIterator.h"

int main()
{
    Aggregate *aggregate = new ConcreteAggregate();
    aggregate->push("Lebron Jame");
    aggregate->push("Michael Jordan");
    aggregate->push("Kobe Bryant");

    Iterator *iter = aggregate->CreateIterator();
    if(NULL != iter)
    {
        string strItem = iter->first();
        while(!iter->isEnd())
        {
            cout <<iter->getCur() <<" is ok" <<endl;
            iter->next();
        }
    }

    delete aggregate;
    delete iter;
    return 0;
}