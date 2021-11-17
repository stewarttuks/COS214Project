#ifndef SATELLITEVECTOR_H
#define SATELLITEVECTOR_H

#include <iostream>
#include <vector>
#include "Satellite.h"
#include "SatelliteIterator.h"

using namespace std;

class SatelliteVector
{
    private:
        vector<Satellite*> satellites;

    public:
        SatelliteVector();
        // virtual ~SatelliteVector();
        ~SatelliteVector();


        SatelliteIterator* createIterator();


};

#endif