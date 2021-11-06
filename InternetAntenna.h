#ifndef INTERNETANTENNA_H
#define INTERNETANTENNA_H

#include <iostream>
#include "Antenna.h"

using namespace std;

class InternetAntenna : public Antenna
{
    private:

    public:
        InternetAntenna();
        virtual ~InternetAntenna();

        void attach(Satellite*);
        void detach(Satellite*);
        void notify();

};

#endif