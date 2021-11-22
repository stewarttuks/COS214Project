/**
 * @file ControlPanelProxy.h
 * @author Runtime Terror
 * @brief Limits access to the control panel to authorized users;
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef CONTROLPANELPROXY_H
#define CONTROLPANELPROXY_H

#include <iostream>
#include "ControlRoom.h"
#include "ControlPanel.h"
#include <string>

using namespace std;

class ControlPanelProxy : public ControlRoom 
{
    
    public:
        ControlPanelProxy();
        ~ControlPanelProxy();
        void protect(ControlRoom*);
        bool authorise(string, string);
        void press(int);
    
    private:
        ControlRoom* controlPanel;
        bool authorized = false;
        string username = "admin";
        string password = "admin";

};

#endif