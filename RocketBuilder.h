#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include <iostream>
#include "Rocket.h"

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