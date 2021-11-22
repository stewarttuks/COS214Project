/**
 * @file Command.cpp
 * @author Runtime Terror
 * @brief Implementation of Command.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Command.h"

/**
 * Constructor
 * @author Runtime Terror
 */
Command::Command(){
    receiver = nullptr;
}

/**
 * Sets the receiver rocket that will run the command
 * @author Runtime Terror
 * @param[in] rocket  The rocket the receives the command
 * @return void
 */
void Command::setRocket(Rocket* rocket){
    receiver = rocket;
}

/**
 * Desctructor
 * @author Runtime Terror
 */
Command::~Command(){

}
