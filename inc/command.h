#ifndef _COMMAND_H
#define _COMMAND_H

#include "receiver.h"

class Command
{
    protected:
        Receiver *receiver;
    public:
        Command(Receiver *receiver);
        virtual void execute() = 0;
};

#endif