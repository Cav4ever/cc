#ifndef _INVOKER_H
#define _INVOKER_H

#include "command.h"

class Invoker
{
    protected:
        Command *command;
    public:
        Invoker(Command *command);
        virtual void executeCommand();
};

#endif