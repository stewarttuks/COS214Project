#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <iostream>
#include "ControlRoom.h"

using namespace std;

class ControlPanel : public ControlRoom
{
    friend class ControlPanelProxy;

    public:
        ControlPanel(Button**);
    private:
        
        virtual ~ControlPanel();
        void press(int);
};

#endif