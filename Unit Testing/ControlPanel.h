/**
 * @file ControlPanel.h
 * @author Runtime Terror
 * @brief Holds the buttons that send commands to the rocket.
 * @version 0.1
 * @date 2021-11-22
 */
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