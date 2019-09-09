#ifndef _MEMENTO_H
#define _MEMENTO_H

class Memento
{
    private:
        int life;
        int atk;
        int def;
    public:
        Memento(int life, int atk, int def);
        int getLife();
        int getAtk();
        int getDef();
};

#endif