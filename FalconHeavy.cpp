#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(int numSat, vector<Satellite*> Vsatellite, string n, int f, RocketState* s) : Rocket(n, f, s)
{
    numSatellites = numSat;
    satellites = Vsatellite;
}

FalconHeavy::~FalconHeavy(){
    for (auto i = satellites.begin(); i != satellites.end(); i++)
        delete *i;
        
    numSatellites = 0;
}

void FalconHeavy::launch(){
    this->getstate()->handleRequest(this, "launch");
}

void FalconHeavy::prepLaunch(){
    this->getstate()->handleRequest(this, "prepLaunch");
}

void FalconHeavy::testLaunch(){
    this->getstate()->handleRequest(this, "testLaunch");
}

void FalconHeavy::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;

    int num = 0;
    for (auto i = satellites.begin(); i != satellites.end(); i++){  
           num++;
           //cout << "Satellite id: " << (*i)->getid() << endl;
    }
    cout << num << " Satellites onboard" << endl;
}