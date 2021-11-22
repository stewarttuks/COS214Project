/**
 * @file InfoCommand.h
 * @author Runtime Terror
 * @brief Gets the information about a rocket.
 * @version 0.1
 * @date 2021-11-22
 */
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