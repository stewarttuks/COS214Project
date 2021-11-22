/**
 * @file LaunchCommand.cpp
 * @author Runtime Terror
 * @brief Implementation of LaunchCommand.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "LaunchCommand.h"

/**
 * Constructor
 * @author Runtime Terror
 */
LaunchCommand::LaunchCommand():Command(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
LaunchCommand::~LaunchCommand(){

}

/**
 * Calls the launch function of the rocket
 * @return void
 */
void LaunchCommand::execute(){
    receiver->activateLaunch();
}