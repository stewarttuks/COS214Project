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

        RocketBackup* restoreRocket();
        void storeRocket(RocketBackup*);


};

#endif