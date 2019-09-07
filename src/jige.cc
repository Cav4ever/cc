#include <iostream>
#include "jige.h"
#include "zhong.h"
#include "student.h"

using std::cout;
using std::endl;

void Jige::handle(Student *student)
{
    if (student->getScore() < 70) {
        cout<<student->getName();
        cout<<": Your result is Jige." <<endl; 
    }
    else {
        student->setState(new Zhong());
        student->printResult();
        delete this;
    }
}