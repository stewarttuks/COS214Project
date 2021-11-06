#ifndef SATELLITEFACTORY_H
#define SATELLITEFACTORY_H

#include <iostream>
#include "Satellite.h"

using namespace std;

class SatelliteFactory
{
    private:

    public:
        SatelliteFactory();
        ~SatelliteFactory();
        
        virtual vector<Satellite*> createSatellites(int) = 0;

};

#endif