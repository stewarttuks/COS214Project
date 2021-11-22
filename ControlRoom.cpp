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




