#include "player.h"

Player::Player(string name)
{
    this->name = name;
    life = 99;
    atk = 99;
    def = 99;
}

Memento *Player::createMemento()
{
    return new Memento(life, atk, def);
}

void Player::setMemento(Memento *memento)
{
    life = memento->getLife();
    atk = memento->getAtk();
    def = memento->getDef();
}

void Player::fight()
{
    life = 1;
    atk = 1;
    def = 1;
}

void Player::show()
{
    cout<<name <<endl;
    cout<<"life: " <<life <<endl;
    cout<<"atk: " <<atk <<endl;
    cout<<"def: " <<def <<endl;
}