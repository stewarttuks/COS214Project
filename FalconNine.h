#ifndef FALCONNINE_H
#define FALCONNINE_H

#include <iostream>
#include <vector>
#include "Rocket.h"
#include "Satellite.h"

using namespace std;

class FalconNine : public Rocket
{
    private:
        int numSatellites;
        vector<Satellite*> satellites;

    public:
        FalconNine(int, vector<Satellite*>, string, int, RocketState*);
        ~FalconNine();

        void getSummary();

        void prepLaunch();
        void testLaunch();
        void launch();

};

#endif