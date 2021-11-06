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

        //I think you may need to add getters and setters

};

#endif