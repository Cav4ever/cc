#ifndef _CONCRETE_COMMAND_H
#define _CONCRETE_COMMAND_H

#include "command.h"

class ConcreteCommand: public Command
{
    public:
        ConcreteCommand(Receiver *receiver);
        virtual void execute();
};

#endif