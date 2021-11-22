/**
 * @file FalconHeavyBuilder.h
 * @author Runtime Terror
 * @brief Creates and stores a FalconHeavy rocket.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef FALCONHEAVYBUILDER_H
#define FALCONHEAVYBUILDER_H

#include <iostream>
#include "RocketBuilder.h"

using namespace std;

class FalconHeavyBuilder : public RocketBuilder
{
    

    public:
        FalconHeavyBuilder();
        ~FalconHeavyBuilder();

        void addParts();

    private:
    
        void addShell();
        void addCores();
        void addMerlinEngine();
        void addVacuumEngine();
        void addFuel();

};

#endif