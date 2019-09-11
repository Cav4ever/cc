#ifndef _AGGRAGATE_H
#define _AGGRAGATE_H

#include "iterator.h"

class Aggregate
{
    public:
        virtual int count() = 0;
        virtual void push(const string &strValue)=0;
        virtual string getItem(const int nIndex)=0;
        virtual Iterator* CreateIterator() = 0;
};

#endif