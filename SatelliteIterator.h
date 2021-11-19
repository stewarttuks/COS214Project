#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H

#include <iostream>
#include <vector>
#include "Satellite.h"

using namespace std;

class SatelliteIterator
{
    
    public:
        SatelliteIterator(vector<Satellite*>);
        ~SatelliteIterator();

        Satellite* first();
        Satellite* next();
        Satellite* current(); 
        bool hasNext();

    private:
        vector<Satellite*> itList;
        int currentPos;


};

#endif