#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H

#include <iostream>
#include <vector>
#include "Satellite.h"

using namespace std;

class SatelliteIterator
{
    private:
        vector<Satellite*> itList;
        int currentPos;

    public:
        SatelliteIterator(vector<Satellite*>);
        ~SatelliteIterator();

        Satellite* first();
        Satellite* last();
        Satellite* next();
        Satellite* current(); //added 
        bool isDone();




};

#endif