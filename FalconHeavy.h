#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include <iostream>
#include <vector>
#include "Rocket.h"
#include "Satellite.h"

using namespace std;

class FalconHeavy : public Rocket
{
    private:
        int numSatellites;
        vector<Satellite*> satellites;


    public:
        FalconHeavy(int, vector<Satellite*>, string, int, RocketState*);
        ~FalconHeavy();

        void prepLaunch();
        void testLaunch();
        void launch();

        void getSummary();

};

#endif