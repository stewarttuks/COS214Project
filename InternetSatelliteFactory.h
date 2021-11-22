/**
 * @file InternetSatelliteFactory.h
 * @author Runtime Terror
 * @brief Creates and returns a vector of InternetSatellite.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef INTERNETSATELLITEFACTORY_H
#define INTERNETSATELLITEFACTORY_H

#include <iostream>
#include "SatelliteFactory.h"
#include "InternetSatellite.h"

using namespace std;

class InternetSatelliteFactory : public SatelliteFactory
{
    private:

    public:
        InternetSatelliteFactory();
        ~InternetSatelliteFactory();

        vector<Satellite*> createSatellites(int);

};

#endif