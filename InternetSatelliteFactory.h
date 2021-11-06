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