#include "bujige.h"
#include "student.h"

Student::Student(string name, int score)
{
    this->name = name;
    this->score = score;
    state = new Bujige();
}

void Student::printResult()
{
    state->handle(this);
}

string &Student::getName()
{
    return name;
}

int Student::getScore()
{
    return score;
}

void Student::setState(State *state)
{
    this->state = state;
}

Student::~Student()
{
    delete state;
}