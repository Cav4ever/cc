#include "memento.h"

Memento::Memento(int life, int atk, int def)
{
    this->life = life;
    this->atk = atk;
    this->def = def;
}

int Memento::getLife()
{
    return life;
}

int Memento::getAtk()
{
    return atk;
}

int Memento::getDef()
{
    return def;
}