#ifndef _CONCRETE_ITERATOR_H
#define _CONCRETE_ITERATOR_H

#include "iterator.h"
#include "aggregate.h"

class ConcreteIterator: public Iterator
{
    private:
        Aggregate* m_Aggregate;
        int m_nCurrent;
    public:
        ConcreteIterator(Aggregate* m_Aggregate);
        virtual string first();
        virtual string next();
        virtual string getCur();
        virtual bool isEnd();
};

#endif