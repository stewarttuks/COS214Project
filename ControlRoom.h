#ifndef CONTROLROOM_H
#define CONTROLROOM_H

#include <iostream>
#include "LaunchCommand.h"
#include "PrepCommand.h"
#include "Button.h"

using namespace std;

class ControlRoom
{
    public:
        ControlRoom();
        virtual ~ControlRoom();
     

    protected:
        Button** buttons;

};

#endif