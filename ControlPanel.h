#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <iostream>
#include "ControlRoom.h"

using namespace std;

class ControlPanel : public ControlRoom
{
    private:

    public:
        ControlPanel(vector<Button*>);
        virtual ~ControlPanel();

};

#endif