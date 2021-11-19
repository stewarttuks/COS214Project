#ifndef ROCKETSTORAGE_H
#define ROCKETSTORAGE_H

#include <iostream>
#include "RocketBackup.h"

using namespace std;

class RocketStorage
{
    private:
        RocketBackup* backup;
    public:
        RocketStorage();
        virtual ~RocketStorage();

        void restoreRocket(Rocket*);
        void storeRocket(RocketBackup*);


};

#endif