/**
 * @file RocketDirector.cpp
 * @author Runtime Terror
 * @brief Implementation of RocketDirector.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "RocketDirector.h"

/**
 * Constructor that creates all the builders of rockets
 * @author Runtime Terror
 */
RocketDirector::RocketDirector(){
    builders = new RocketBuilder*[4];
    builders[0] = new CrewDragonBuilder();
    builders[1] = new DragonBuilder();
    builders[2] = new FalconHeavyBuilder();
    builders[3] = new FalconNineBuilder();
}


/**
 * Destructor
 * @author Runtime Terror
 */
RocketDirector::~RocketDirector(){

}

/**
 * Gets a builder to build a specific rocket
 * @author Runtime Terror
 * @param[in] r  the index of the builder needed to build the rocket
 * @return void
 */
void RocketDirector::build(int r){
    if (r <= 3)
    {
        builders[r]->addParts();
        built = builders[r]->returnRocket();
    }
}

/**
 * Gets the rocket from the builder
 * @author Runtime Terror
 * @return Rocket*  The rocket that was built
 */
Rocket* RocketDirector::getRocket(){
    return built;
}