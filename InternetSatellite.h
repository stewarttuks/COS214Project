#ifndef INTERNETSATELLITE_H
#define INTERNETSATELLITE_H

#include <iostream>
#include "Satellite.h"

using namespace std;

class InternetSatellite : public Satellite
{
    public:
        InternetSatellite(int);
        ~InternetSatellite();

        void test(string);

        private:

};

#endif