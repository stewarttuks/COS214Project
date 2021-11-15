#ifndef LAUNCHCOMMAND_H
#define LAUNCHCOMMAND_H

#include <iostream>
#include "Command.h"

using namespace std;

class LaunchCommand : public Command
{
    public:
        LaunchCommand(Rocket*);
        virtual ~LaunchCommand();
        void execute();

};

#endif