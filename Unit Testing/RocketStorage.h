/**
 * @file RocketStorage.h
 * @author Runtime Terror
 * @brief Stores/restores the current state of a Rocket object.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef ROCKETSTORAGE_H
#define ROCKETSTORAGE_H

#include <iostream>
#include "RocketBackup.h"

using namespace std;

class RocketStorage
{
    public:
        RocketStorage();
        virtual ~RocketStorage();

        void restoreRocket(Rocket*);
        void storeRocket(RocketBackup*);

    private:
        RocketBackup* backup;


};

#endif