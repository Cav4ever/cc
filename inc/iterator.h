#ifndef _ITERATOR_H
#define _ITERATOR_H

#include <iostream>
#include <string>

using namespace std;

class Iterator
{
    public:
        virtual string first() = 0;
        virtual string next() = 0;
        virtual string getCur() = 0;
        virtual bool isEnd() = 0;
};

#endif