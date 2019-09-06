#ifndef _SUBJECT_H
#define _SUBJECT_H

#include <string>
#include <iostream>
#include <list>

using namespace std;
class Observer;

class Subject
{
    protected:
        string subjectState;
        list<Observer *> obsLIst;
    public:
        void attach(Observer *observer);
        void detach(Observer *observer);
        void notify();
        string getState();
        virtual void setState()=0;
};

#endif