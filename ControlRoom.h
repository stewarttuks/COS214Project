#ifndef CONTROLROOM_H
#define CONTROLROOM_H

#include <iostream>
#include <vector>
#include "Button.h"

using namespace std;

class ControlRoom
{
    private:
        vector<Button*> buttons;

    public:
        ControlRoom();
        virtual ~ControlRoom();

};

#endif