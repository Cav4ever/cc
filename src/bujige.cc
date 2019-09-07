#include <iostream>
#include "bujige.h"
#include "jige.h"
#include "student.h"

using std::cout;
using std::endl;

void Bujige::handle(Student *student)
{
    if (student->getScore() < 60) {
        cout<<student->getName();
        cout<<": Your result is Bujige." <<endl; 
    }
    else {
        student->setState(new Jige());
        student->printResult();
        delete this;
    }
}