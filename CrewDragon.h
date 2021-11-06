#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include <iostream>
#include <vector>
#include "Rocket.h"
#include "Crew.h"
#include "Cargo.h"

using namespace std;

class CrewDragon : public Rocket
{
    private:
        int NumCrewMembers;
        int NumCargoBoxes;
        vector<Crew*> crew;
        vector<Cargo*> cargo;


    public:
        CrewDragon(int, vector<Crew*>, int, vector<Cargo*>, string, int, RocketState*);
        ~CrewDragon();

        void prepLaunch();
        void testLaunch();
        void launch();

        void getSummary();


};

#endif