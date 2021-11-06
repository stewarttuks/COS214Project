#ifndef DRAGONBUILDER_H
#define DRAGONBUILDER_H

#include <iostream>
#include "RocketBuilder.h"

using namespace std;

class DragonBuilder : public RocketBuilder
{
    private:

    public:
        DragonBuilder();
        virtual ~DragonBuilder();

        void addParts();
        void addShell();
        void addDragonEngine();
        void addCrates();

};

#endif