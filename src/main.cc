#include "player.h"
#include "careTaker.h"

int main()
{
    Player player("LBJ");
    player.show();
    CareTaker careTaker;
    careTaker.setMemento(player.createMemento());

    player.fight();
    player.show();

    player.setMemento(careTaker.getMemento());
    player.show();
    delete careTaker.getMemento();
    return 0;
}