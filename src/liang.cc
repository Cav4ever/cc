#include <iostream>
#include "liang.h"
#include "youxiu.h"
#include "student.h"

using std::cout;
using std::endl;

void Liang::handle(Student *student)
{
    if (student->getScore() < 90) {
        cout<<student->getName();
        cout<<": Your result is Liang." <<endl; 
    }
    else {
        student->setState(new Youxiu());
        student->printResult();
        delete this;
    }
}