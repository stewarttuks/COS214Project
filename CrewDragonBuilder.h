#ifndef CREWDRAGONBUILDER_H
#define CREWDRAGONBUILDER_H

#include <iostream>
#include "RocketBuilder.h"

using namespace std;

class CrewDragonBuilder : public RocketBuilder
{
    

    public:
        CrewDragonBuilder();
        virtual ~CrewDragonBuilder();
        void addParts();

    private:
        void addShell();
        void addDragonEngine();
        void addSeats();
        void addCrates();
        void addFuel();

};

#endif