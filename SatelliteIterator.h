#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H

#include <iostream>
#include <vector>
#include "Satellite.h"

using namespace std;

class SatelliteIterator
{
    private:
        

    public:
        SatelliteIterator(vector<Satellite*>);
        ~SatelliteIterator();

        Satellite* first();
        Satellite* last();
        Satellite* next();
        bool isDone();




};

#endif