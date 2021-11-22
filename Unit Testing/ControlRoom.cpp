/**
 * @file ControlRoom.cpp
 * @author Runtime Terror
 * @brief Implementation of ControlRoom.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "ControlRoom.h"

/**
 * Constructor
 * @author Runtime Terror
 */
ControlRoom::ControlRoom(){
    
}

/**
 * Destructor
 * @author Runtime Terror
 */
ControlRoom::~ControlRoom(){ 
}

/**
 * Set the rocket receiver for all the buttons
 * @author Runtime Terror
 * @param[in] r  Rocket receiver
 * @return void
 */
void ControlRoom::setReceiver(Rocket* r){
    buttons[0]->setRocket(r);
    buttons[1]->setRocket(r);
    buttons[2]->setRocket(r);
}

/**
 * Only the proxy should protect
 * @author Runtime Terror
 * @param[in] c  the control room to protect
 * @return void
 */
void ControlRoom::protect(ControlRoom* c){

}

/**
 * Only the proxy should authorise a user
 * @author Runtime Terror
 * @param[in] u  the username
 * @param[in] p  the password
 * @return bool  false
 */
bool ControlRoom::authorise(string u, string p){
    return false;
}




