/**
 * @file InternetSatellite.h
 * @author Runtime Terror
 * @brief The satellites used for the starlink project.
 * @version 0.1
 * @date 2021-11-22
 */
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


};

#endif