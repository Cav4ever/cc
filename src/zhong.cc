#include <iostream>
#include "zhong.h"
#include "liang.h"
#include "student.h"

using std::cout;
using std::endl;

void Zhong::handle(Student *student)
{
    if (student->getScore() < 80) {
        cout<<student->getName();
        cout<<": Your result is Zhong." <<endl; 
    }
    else {
        student->setState(new Liang());
        student->printResult();
        delete this;
    }
}