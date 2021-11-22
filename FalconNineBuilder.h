/**
 * @file FalconNineBuilder.h
 * @author Runtime Terror
 * @brief Creates and stores a FalconNine rocket.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef FALCONNINEBUILDER_H
#define FALCONNINEBUILDER_H

#include <iostream>
#include "RocketBuilder.h"

using namespace std;

class FalconNineBuilder : public RocketBuilder
{

    public:
        FalconNineBuilder();
        virtual ~FalconNineBuilder();
        void addParts();

    private:
        void addShell();
        void addCores();
        void addMerlinEngine();
        void addVacuumEngine();
        void addFuel();

  


};

#endif