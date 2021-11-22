/**
 * @file PrepCommand.h
 * @author Runtime Terror
 * @brief Tells the rocket to prepare for launch.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef PREPCOMMAND_H
#define PREPCOMMAND_H

#include <iostream>
#include "Command.h"

using namespace std;

class PrepCommand : public Command
{
    public:
        PrepCommand();
        virtual ~PrepCommand();
        void execute();
};

#endif