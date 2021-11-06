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

        void push();
        void operation(Command*);

};

#endif