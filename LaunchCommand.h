#ifndef LAUNCHCOMMAND_H
#define LAUNCHCOMMAND_H

#include <iostream>
#include "Command.h"

using namespace std;

class LaunchCommand : public Command
{
    private:

    public:
        LaunchCommand();
        virtual ~LaunchCommand();

        void execute();

};

#endif