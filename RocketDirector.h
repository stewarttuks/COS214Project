#ifndef ROCKETDIRECTOR_H
#define ROCKETDIRECTOR_H

#include <iostream>
#include <vector>

#include "RocketBuilder.h"
#include "Rocket.h"

using namespace std;

class RocketDirector
{
    private:
        vector<RocketBuilder*> builders;
    public:
        RocketDirector();
        virtual ~RocketDirector();

        void build();
        Rocket* getRocket();

};

#endif