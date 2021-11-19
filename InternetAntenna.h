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