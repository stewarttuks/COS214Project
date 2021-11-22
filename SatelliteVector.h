/**
 * @file SatelliteVector.h
 * @author Runtime Terror
 * @brief The data structure that holds Satellite objects.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef SATELLITEVECTOR_H
#define SATELLITEVECTOR_H

#include <iostream>
#include <vector>
#include "Satellite.h"
#include "SatelliteIterator.h"

using namespace std;

class SatelliteVector
{
    
    public:
        SatelliteVector();
        // virtual ~SatelliteVector();
        ~SatelliteVector();
        void add(Satellite*);
        void remove(int);
        SatelliteIterator* createIterator();

    private:
        vector<Satellite*> satellites;


};

#endif