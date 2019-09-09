#ifndef _PLAYER_H
#define _PLAYER_H

#include "memento.h"
#include <string>
#include <iostream>
using namespace std;

class Player
{
    private:
        string name;
        int life;
        int atk;
        int def;
    public:
        Player(string name);
        Memento *createMemento();
        void setMemento(Memento *memento);
        void fight();
        void show();
};

#endif