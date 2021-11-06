#include "CrewDragon.h"

CrewDragon::CrewDragon(int CM, vector<Crew*> VCrew, int CB, vector<Cargo*> VCargo, string n, int f, RocketState* s) : Rocket(n, f, s)
{
    NumCrewMembers = CM;
    crew = VCrew;
    NumCargoBoxes = CB;
    cargo = VCargo;
}

CrewDragon::~CrewDragon(){
    for (auto i = crew.begin(); i != crew.end(); i++)
        delete *i;

    for (auto i = cargo.begin(); i != cargo.end(); i++)
        delete *i;

    NumCrewMembers = 0;
    NumCargoBoxes = 0;
}

void CrewDragon::launch(){
    this->getstate()->handleRequest(this, "launch");
}

void CrewDragon::prepLaunch(){
    this->getstate()->handleRequest(this, "prepLaunch");
}

void CrewDragon::testLaunch(){
    this->getstate()->handleRequest(this, "testLaunch");
}

void CrewDragon::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;
    
    for (auto i = crew.begin(); i != crew.end(); i++)      
            cout << "Crew Member Name: " << (*i)->getname() << endl;
    
    cout << endl;
    for (auto i = cargo.begin(); i != cargo.end(); i++)      
            cout << "Crew desription: " << (*i)->getdescription() << endl;
}