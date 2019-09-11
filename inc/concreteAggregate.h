#ifndef _CONCRETE_AGGRAGATE_H
#define _CONCRETE_AGGRAGATE_H

#include "aggregate.h"
#include <vector>

class ConcreteAggregate: public Aggregate
{
    private:
        vector<string> m_vecItems;
        Iterator* m_pIterator;
    public:
        ConcreteAggregate();
        virtual int count();
        virtual void push(const string &strValue);
        virtual string getItem(const int nIndex);
        virtual Iterator* CreateIterator();
};

#endif