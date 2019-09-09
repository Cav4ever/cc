#include "careTaker.h"

void CareTaker::setMemento(Memento *memento)
{
    this->memento = memento;
}

Memento *CareTaker::getMemento()
{
    return memento;
}