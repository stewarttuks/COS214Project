/**
 * @file Button.cpp
 * @author Runtime Terror
 * @brief Implementation of Button.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Button.h"

/**
 * Constructor
 * @author Runtime Terror
 * @param[in] c  The command a button will call when pressed 
 */
Button::Button(Command* c){
    command = c;
}

/**
 * Destructor
 * @author Runtime Terror
 */
Button::~Button(){
    delete command;
}

/**
 * Runs the Command stored in the button
 * @author Runtime Terror
 * @return void
 */
void Button::press(){
    if (command)
        command->execute();
}

/**
 * Sets the command that will be run when pressed
 * @author Runtime Terror
 * @param[in] c  The command that the button will execute
 * @return void
 */
void Button::setOperation(Command* c){
    command = c;
}

/**
 * Set the Rocket that the command will run on.
 * @author Runtime Terror
 * @param[in] r  The rocket that is held by the command
 * @return void
 */
void Button::setRocket(Rocket* r){
    if (command)
        command->setRocket(r);
}