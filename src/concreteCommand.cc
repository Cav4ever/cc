#include "concreteCommand.h"

ConcreteCommand::ConcreteCommand(Receiver *receiver): Command(receiver)
{
    //
}

void ConcreteCommand::execute()
{
    receiver->action();
}