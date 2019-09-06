#include "observer.h"

Observer::Observer(Subject *subject, string name)
{
    this->name = name;
    this->subject = subject;
}