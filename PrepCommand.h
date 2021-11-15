#ifndef PREPCOMMAND_H
#define PREPCOMMAND_H

#include <iostream>
#include "Command.h"

using namespace std;

class PrepCommand : public Command
{
    public:
        PrepCommand(Rocket*);
        virtual ~PrepCommand();
        void execute();

};

#endif