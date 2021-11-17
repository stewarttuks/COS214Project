#ifndef INTERNETANTENNA_H
#define INTERNETANTENNA_H

// concreteSubject

#include <iostream>
#include "Antenna.h"

using namespace std;

class InternetAntenna : public Antenna
{
    private:
        string signal;


    public:
        InternetAntenna();
        virtual ~InternetAntenna();

        // void attach(Satellite*);
        // void detach(Satellite*);
        // void notify();

        string getSignal();
        void setSignal(string);

};

#endif