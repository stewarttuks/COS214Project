#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "Command.h"

using namespace std;

class Button
{
    private:
        Command* command;
    public:
        Button(Command*);
        virtual ~Button();

        void press();
        void operation(Command*);

};

#endif