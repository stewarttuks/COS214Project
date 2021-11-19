#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include <iostream>

#include "Rocket.h"


using namespace std;

class CrewDragon : public Rocket
{

    public:
        CrewDragon();
        ~CrewDragon();

        void prepLaunch();
        void launch();

        void getSummary();

};

#endif