#ifndef ROCKETBACKUP_H
#define ROCKETBACKUP_H

#include <iostream>

#include "Rocket.h"

using namespace std;

class RocketBackup
{

    public:
        RocketBackup(Rocket*);
        virtual ~RocketBackup();

        string getBackupName();
        int getBackupFuel();


        void setBackupFuel(int);
        void setBackupName(string);

    private:
        string name;
        int fuel;


};

#endif