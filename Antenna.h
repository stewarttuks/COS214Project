/**
 * @file Antenna.h
 * @author Runtime Terror
 * @brief Used to communicate with satellites in orbit.
 * @version 0.1
 * @date 2021-11-22
 * 
 * 
 */
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