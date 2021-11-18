#ifndef DRAGONBUILDER_H
#define DRAGONBUILDER_H

#include <iostream>
#include "RocketBuilder.h"

using namespace std;

class DragonBuilder : public RocketBuilder
{
   

    public:
        DragonBuilder();
        virtual ~DragonBuilder();
        void addParts();

    private:
        void addShell();
        void addDragonEngine();
        void addCrates();
        void addFuel();

};

#endif