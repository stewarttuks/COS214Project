#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "Rocket.h"

using namespace std;

class Command
{
    
    public:
        Command(Rocket*);
        void setRocket(Rocket*);
        virtual ~Command();
        virtual void execute() = 0;
        

    protected:
        Rocket* receiver;

};

#endif