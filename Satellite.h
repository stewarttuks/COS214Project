#ifndef SATELLITE_H
#define SATELLITE_H

#include <iostream>
// #include "Antenna.h"

using namespace std;

// class Antenna;

class Satellite
{
    public:
        Satellite(int);
        ~Satellite();

        //getters and setters
        int getid();
        // Antenna* getantenna();
        void setid(int);
        // void setantenna(Antenna*);
        void receiveMessage(string);

    private:
        int id;
        // Antenna* antenna;



};

#endif