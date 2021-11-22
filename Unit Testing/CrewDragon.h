/**
 * @file CrewDragon.h
 * @author Runtime Terror
 * @brief A rocket that holds 10 crew and 20 cargo crates.
 * @version 0.1
 * @date 2021-11-22
 */
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
        string getType();

        void getSummary();

};

#endif