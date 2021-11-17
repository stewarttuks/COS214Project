#ifndef ROCKETBACKUP_H
#define ROCKETBACKUP_H

#include <iostream>

using namespace std;

class RocketBackup
{
    private:
        string name;
        int fuel;

    public:
        RocketBackup(string, int);
        virtual ~RocketBackup();
        string getBackupName() { return name; }
        int getBackupFuel() { return fuel; }
        void setBackupFuel(int);
        void setBackupName(string);

};

#endif