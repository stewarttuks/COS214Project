#ifndef CREWDRAGONBUILDER_H
#define CREWDRAGONBUILDER_H

#include <iostream>
#include "RocketBuilder.h"

using namespace std;

class CrewDragonBuilder : public RocketBuilder
{
    private:

    public:
        CrewDragonBuilder();
        virtual ~CrewDragonBuilder();
    
        void addParts();
        void addShell();
        void addDragonEngine();
        void addSeats();
        void addCrates();

};

#endif