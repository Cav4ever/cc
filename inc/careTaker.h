#ifndef _CARETAKER_H
#define _CARETAKER_H

#include "memento.h"

class CareTaker
{
    private:
        Memento *memento;
    public:
        void setMemento(Memento *memento);
        Memento *getMemento();
};

#endif