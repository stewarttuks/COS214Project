/**
 * @file LaunchCommand.h
 * @author Runtime Terror
 * @brief Tells the rocket to launch.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef LAUNCHCOMMAND_H
#define LAUNCHCOMMAND_H

#include <iostream>
#include "Command.h"

using namespace std;

class LaunchCommand : public Command
{
    public:
        LaunchCommand();
        virtual ~LaunchCommand();
        void execute();
};

#endif