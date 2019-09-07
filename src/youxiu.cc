#include <iostream>
#include "youxiu.h"
#include "student.h"

using std::cout;
using std::endl;

void Youxiu::handle(Student *student)
{
    cout<<student->getName();
    cout<<": Your result is Youxiu." <<endl;
}