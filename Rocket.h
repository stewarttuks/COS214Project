#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include "RocketState.h"

using namespace std;

class Rocket
{
    private:
        string name;
        int fuel;
        RocketState* state;

    public:
        Rocket();
        Rocket(string, int, RocketState*);
        virtual ~Rocket();

        virtual void launch() = 0;
        virtual void prepLaunch() = 0;

        //getters
        string getname();
        int getfuel();
        RocketState* getstate();

};

#endif