/**
 * @file Button.h
 * @author Runtime Terror
 * @brief A button on the control panel that sends a command to a rocket.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "Command.h"
#include "Rocket.h"

using namespace std;

class Button
{
    public:
        Button(Command*);
        virtual ~Button();

        void press();
        void setOperation(Command*);
        void setRocket(Rocket*);
        
    private:
        Command* command;

};

#endif