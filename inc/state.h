#ifndef _STATE_H
#define _STATE_H

class Student;

class State
{
    public:
        virtual void handle(Student *student)=0;
};

#endif