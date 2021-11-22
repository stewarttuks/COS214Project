/**
 * @file ControlPanelProxy.cpp
 * @author Runtime Terror
 * @brief Implementation of ControlPanelProxy.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "ControlPanelProxy.h"


/**
 * Constructor
 * @author Runtime Terror
 */
ControlPanelProxy::ControlPanelProxy(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
ControlPanelProxy::~ControlPanelProxy(){

}

/**
 * Sets the control panel that will be protected
 * @author Runtime Terror
 * @param[in] s 
 * @return void
 */
void ControlPanelProxy::protect(ControlRoom* cp){
    controlPanel = cp;
}

/**
 * Logs a user in and checks if their username and password are correct
 * @author Runtime Terror
 * @param[in] un  the username to log in 
 * @param[in] pass  the password to log in 
 * @return bool  true if the username and password are correct
 */
bool ControlPanelProxy::authorise(string un, string pass){
    if (username == un && pass == password){
        authorized = true;
    }

    return authorized;;
}

/**
 * Presses a button if a user is authorised
 * @author Runtime Terror
 * @param[in] b  button index to press 
 * @return void
 */
void ControlPanelProxy::press(int b){
    if (authorized)
        controlPanel->press(b);
    else
        cout<<"ERROR: User not authorized\n";
}