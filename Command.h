#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "Rocket.h"

using namespace std;

class Command
{
    private:
        Rocket* reciever;
    public:
        Command();
        virtual ~Command();

       virtual void execute() = 0;

};

#endif