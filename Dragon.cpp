#include "Dragon.h"

Dragon::Dragon(int CB, vector<Cargo*> VCargo, string n, int f, RocketState* s) : Rocket(n, f, s)
{
    numCargoBoxes = CB;
    cargo = VCargo;

}

Dragon::~Dragon(){
    for (auto i = cargo.begin(); i != cargo.end(); i++)
        delete *i;
    numCargoBoxes = 0;
}

void Dragon::launch(){
    this->getstate()->handleRequest(this, "launch");
}

void Dragon::prepLaunch(){
    this->getstate()->handleRequest(this, "prepLaunch");
}

void Dragon::testLaunch(){
    this->getstate()->handleRequest(this, "testLaunch");
}

void Dragon::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;

    for (auto i = cargo.begin(); i != cargo.end(); i++)      
            cout << "Crew desription: " << (*i)->getdescription() << endl;
}