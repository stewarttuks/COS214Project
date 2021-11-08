#ifndef SATELLITEFACTORY_H
#define SATELLITEFACTORY_H

#include <iostream>
#include <vector>
#include "Satellite.h"

using namespace std;

class SatelliteFactory
{
    private:
        vector<Satellite*> satellites;
    public:
        SatelliteFactory();
        ~SatelliteFactory();
        
        vector<Satellite*> CreateAllSatellites(int);                    //anOperation() in slides
        virtual vector<Satellite*> createSatellites(int) = 0;           // FactoryMethods() in slides

};

#endif