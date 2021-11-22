/**
 * @file InternetAntenna.h
 * @author Runtime Terror
 * @brief Used to communicate with the satellites in orbit.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef INTERNETANTENNA_H
#define INTERNETANTENNA_H

// concreteSubject

#include <iostream>
#include "Antenna.h"
#include <vector>

using namespace std;

class InternetAntenna : public Antenna
{
   
    public:
        InternetAntenna();
        virtual ~InternetAntenna();

        void attach(Satellite*);
        void attachAll(vector<Satellite*>);
        void notify(string);

};

#endif