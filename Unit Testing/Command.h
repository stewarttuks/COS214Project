/**
 * @file Command.h
 * @author Runtime Terror
 * @brief The interface for rocket commands.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "Rocket.h"

using namespace std;

class Command
{
    public:
        Command();
        void setRocket(Rocket*);
        virtual ~Command();
        virtual void execute() = 0;
        

    protected:
        Rocket* receiver;

};

#endif