/**
 * @file InfoCommand.cpp
 * @author Runtime Terror
 * @brief Implementation of InfoCommand.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "InfoCommand.h"

/**
 * Constructor
 * @author Runtime Terror
 */
InfoCommand::InfoCommand():Command(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
InfoCommand::~InfoCommand(){

}

/**
 * Gets the info about the rocket to the console
 * @author Runtime Terror
 * @return void
 */
void InfoCommand::execute(){
    receiver->getSummary();
}