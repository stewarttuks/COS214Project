#ifndef ANTENNA_H
#define ANTENNA_H

#include <iostream>
#include <vector>
#include "Satellite.h"
#include "SatelliteVector.h"

class Satellite;
using namespace std;

class Antenna
{
    public:
        Antenna();
        virtual ~Antenna();

        virtual void attach(Satellite*) = 0;
        virtual void attachAll(vector<Satellite*>) =0;
        virtual void notify(string) = 0;

        SatelliteVector* getSatelliteList();
        void setSatelliteList(SatelliteVector*);

     protected:
        SatelliteVector* satelliteList;
        string signal;

};

#endif