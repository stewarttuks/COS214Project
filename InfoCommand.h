#ifndef INFOCOMMAND_H
#define INFOCOMMAND_H

#include <iostream>
#include "Command.h"

using namespace std;

class InfoCommand : public Command
{
    public:
        InfoCommand();
        virtual ~InfoCommand();
        void execute();
};

#endif