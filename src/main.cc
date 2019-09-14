#include "concreteCommand.h"
#include "invoker.h"

int main()
{
    Receiver *receiver = new Receiver();
    Command *command = new ConcreteCommand(receiver);
    Invoker *invoker = new Invoker(command);
    invoker->executeCommand();

    delete receiver;
    delete command;
    delete invoker;
    return 0;
}