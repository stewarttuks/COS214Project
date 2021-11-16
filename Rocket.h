#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include "RocketState.h"
#include "Cargo.h"

using namespace std;

class RocketState;
class Rocket
{
    public:
        Rocket();
        Rocket(string, int, RocketState*);
        virtual ~Rocket();

        //Template Methods
        void activateLaunch();
        void activatePrepLaunch();
    
        // Methods to be implemented in the child classes
        virtual void launch() = 0;
        virtual void prepLaunch() = 0;
        virtual void getSummary() = 0;

        //getters
        string getname();
        int getfuel();
        RocketState* getstate();

    private:
        string name;
        int fuel;
        RocketState* state;


};

#endif