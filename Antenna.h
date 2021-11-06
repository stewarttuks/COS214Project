#ifndef ANTENNA_H
#define ANTENNA_H

#include <iostream>
#include <vector>
#include "Satellite.h"

class Satellite;
using namespace std;

class Antenna
{
    private:
        vector<Satellite*> satelliteList;
        string signal;
    public:
        Antenna();
        virtual ~Antenna();

        virtual void attach(Satellite*) = 0;
        virtual void detach(Satellite*) = 0;
        virtual void notify() = 0;


        //setters and getters
        string getSignal();
        void setSignal(string);
        vector<Satellite*> getSatelliteList();
        void setSatelliteList(vector<Satellite*>);

};

#endif