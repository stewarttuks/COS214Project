#ifndef CONTROLROOM_H
#define CONTROLROOM_H

#include <iostream>
#include "LaunchCommand.h"
#include "PrepCommand.h"
#include "Button.h"
#include "Rocket.h"

using namespace std;

class ControlRoom
{
    public:
        ControlRoom();
        virtual ~ControlRoom();
        virtual void press(int) = 0;
        void setReceiver(Rocket*);
        virtual void protect(ControlRoom*);
        virtual bool authorise(string, string);

    protected:
        Button** buttons;

};

#endif