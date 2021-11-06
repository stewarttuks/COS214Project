#ifndef PREPCOMMAND_H
#define PREPCOMMAND_H

#include <iostream>
#include "Command.h"

using namespace std;

class PrepCommand : public Command
{
    private:

    public:
        PrepCommand();
        virtual ~PrepCommand();

        void execute();

};

#endif