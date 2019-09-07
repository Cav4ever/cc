#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>
#include <iostream>
#include "state.h"

using namespace std;

class Student
{
    private:
        string name;
        int score;
        State *state;
    public:
        Student(string name, int score);
        int getScore();
        string &getName();
        void setState(State *state);
        void printResult();
        virtual ~Student();
};

#endif