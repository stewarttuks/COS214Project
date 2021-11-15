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

    protected:
    
        void addShell();
        void addCores();
        void addMerlinEngine();
        void addVacuumEngine();

};

#endif