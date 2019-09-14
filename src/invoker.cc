#include "invoker.h"

Invoker::Invoker(Command *command)
{
    this->command = command;
}

void Invoker::executeCommand()
{
    command->execute();
}