#ifndef INTERNETSATELLITE_H
#define INTERNETSATELLITE_H

#include <iostream>
#include "Satellite.h"

using namespace std;

class InternetSatellite : public Satellite
{
    private:

    public:
        InternetSatellite(int);
        ~InternetSatellite();

        void test(string);

};

#endif