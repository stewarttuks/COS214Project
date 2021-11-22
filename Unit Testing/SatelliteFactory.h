/**
 * @file SatelliteFactory.h
 * @author Runtime Terror
 * @brief Vectors of satellites are created and returned.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef SATELLITEFACTORY_H
#define SATELLITEFACTORY_H

#include <iostream>
#include <vector>
#include "Satellite.h"

using namespace std;

class SatelliteFactory
{
    public:
        SatelliteFactory();
        ~SatelliteFactory();
        
        vector<Satellite*> CreateAllSatellites(int);                    //anOperation() in slides
        virtual vector<Satellite*> createSatellites(int) = 0;           // FactoryMethods() in slides

    private:
        vector<Satellite*> satellites;

};

#endif