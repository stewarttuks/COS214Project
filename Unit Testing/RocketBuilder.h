/**
 * @file RocketBuilder.h
 * @author Runtime Terror
 * @brief The interface for the builders of rockets.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include <iostream>
#include "Rocket.h"
#include "FalconHeavy.h"
#include "FalconNine.h"
#include "CrewDragon.h"
#include "Dragon.h"

using namespace std;

class RocketBuilder
{
    
    public:
        RocketBuilder();
        virtual ~RocketBuilder();
        virtual void addParts() = 0;
        Rocket* returnRocket();

    protected:
        Rocket* builtRocket;

};

#endif