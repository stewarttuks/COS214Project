#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include <vector>

#include "RocketState.h"
#include "Cargo.h"
#include "Crew.h"
#include "Satellite.h"

using namespace std;

class RocketState;
class Rocket
{
    public:
        Rocket();
        // Rocket(string, int, RocketState*);
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
        string getStateString();
        virtual string getType() =0;

        //setters

        void setFuel(int);
        void setName(string);
        void setState(RocketState*);

        void loadSatellites(vector<Satellite*>);
        void loadCrew(Crew*);
        void loadCargo(Cargo*);

        

    protected:
        string name;
        int fuel;
        RocketState* state;

        int numCrewMembers =0;
        int numCargoBoxes =0;
        int numSatellites =0;

        vector<Crew*> crew;
        vector<Cargo*> cargo;
        vector<Satellite*> satellites;


};

#endif