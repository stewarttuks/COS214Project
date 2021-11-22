#include "CrewDragon.h"

CrewDragon::CrewDragon()
{
  
}

CrewDragon::~CrewDragon(){
    for (auto i = crew.begin(); i != crew.end(); i++)
        delete *i;

    for (auto i = cargo.begin(); i != cargo.end(); i++)
        delete *i;

    numCrewMembers = 0;
    numCargoBoxes = 0;
}

void CrewDragon::launch(){
    this->getstate()->handleRequest(this, "launch");
}

void CrewDragon::prepLaunch(){
    this->getstate()->handleRequest(this, "prep");
}

void CrewDragon::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;
    
    int p=1;
    for (auto i = crew.begin(); i != crew.end(); i++)      
    {
        cout << "Crew Member " << p++ << " (" << (*i)->getgender()<< ") "<< endl;
    }
    
    int c =0;
    cout << endl;
    for (auto i = cargo.begin(); i != cargo.end(); i++)      
            cout << "Cargo crate "<< ++c << ": " << (*i)->getDescription() << endl;
}

string CrewDragon::getType(){
    return "CD";
}