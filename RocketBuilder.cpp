/**
 * @file RocketBuilder.cpp
 * @author Runtime Terror
 * @brief Implementation of RocketBuilder.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "RocketBuilder.h"

/**
 * Constructor
 * @author Runtime Terror
 */
RocketBuilder::RocketBuilder(){

}

/**
 * Destructor
 * @author  Runtime Terror
 */
RocketBuilder::~RocketBuilder(){

}

/**
 * Get the rocket that was built
 * @author Runtime Terror
 * @return Rocket*  the rocket that was built
 */
Rocket* RocketBuilder::returnRocket(){
    return builtRocket;
}
