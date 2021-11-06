#ifndef CONTROLPANELPROXY_H
#define CONTROLPANELPROXY_H

#include <iostream>
#include "ControlRoom.h"
#include "ControlPanel.h"

using namespace std;

class ControlPanelProxy : public ControlRoom 
{
    private:
        ControlPanel* controlPanel;
    public:
        ControlPanelProxy();
        ~ControlPanelProxy();

        void protect(ControlPanel*);

};

#endif