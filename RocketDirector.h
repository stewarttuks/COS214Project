/**
 * @file RocketDirector.h
 * @author Runtime Terror
 * @brief Holds and directs rocket builders.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef ROCKETDIRECTOR_H
#define ROCKETDIRECTOR_H

#include <iostream>

#include "RocketBuilder.h"
#include "FalconHeavyBuilder.h"
#include "FalconNineBuilder.h"
#include "CrewDragonBuilder.h"
#include "DragonBuilder.h"
#include "Rocket.h"

using namespace std;

class RocketDirector
{
    public:
        RocketDirector();
        virtual ~RocketDirector();
        void build(int);
        Rocket* getRocket();
    
    private:
        Rocket* built;
        RocketBuilder** builders;
        // Builder 0 : CrewDragon
        // Builder 1 : Dragon
        // Builder 2 : FalconHeavy
        // Builder 3 : FalconNine

};

#endif