/**
 * @file ControlPanel.cpp
 * @author Runtime Terror
 * @brief Implementation of ControlPanel.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "ControlPanel.h"

/**
 * Constructor
 * @author Runtime Terror
 * @param[in] b  array of buttons held by the control panel 
 */
ControlPanel::ControlPanel(Button** b){
    buttons =b;
}
 
/**
 * Destructor
 * @author Runtime Terror
 */
ControlPanel::~ControlPanel(){

}

/**
 * Runs the command stored in button pressed 
 * @author Runtime Terror
 * @param[in] b  index of the button you want to press
 * @return void
 */
void ControlPanel::press(int b){
    buttons[b]->press();
}