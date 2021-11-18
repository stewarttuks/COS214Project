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
        virtual void press(int) = 0;

    protected:
        Button** buttons;

};

#endif