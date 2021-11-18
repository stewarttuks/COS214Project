#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "Command.h"
#include "Rocket.h"

using namespace std;

class Button
{
    private:
        Command* command;
    public:
        Button(Command*);
        virtual ~Button();

        void press();
        void setOperation(Command*);
        void setRocket(Rocket*);

};

#endif