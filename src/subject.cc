#include "subject.h"
#include "observer.h"

void Subject::attach(Observer *observer)
{
    obsLIst.push_back(observer);
}
void Subject::detach(Observer *observer)
{
    if (NULL != observer) {
        obsLIst.remove(observer);
    }
}

void Subject::notify()
{
    list<Observer *>::iterator iter = obsLIst.begin();
    while (iter != obsLIst.end()) {
        (*iter)->update();
        iter++;
    }
}

string &Subject::getState()
{
    return subjectState;
}