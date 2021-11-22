/**
 * @file PrepCommand.cpp
 * @author Runtime Terror
 * @brief Implementation of PrepCommand.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "PrepCommand.h"

/**
 * Constructor
 * @author Runtime Terror
 */
PrepCommand::PrepCommand():Command(){
}

/**
 * Destructor
 * @author Runtime Terror
 */
PrepCommand::~PrepCommand(){

}

/**
 * Calls the prep function of the rocket
 * @author Runtime Terror
 * @return void
 */
void PrepCommand::execute(){
    receiver->activatePrepLaunch();
}