#include "FalconNine.h"

FalconNine::FalconNine()
{

}

FalconNine::~FalconNine(){
    for (auto i = satellites.begin(); i != satellites.end(); i++)
        delete *i;
        
    numSatellites = 0;
}

void FalconNine::launch(){
    this->getstate()->handleRequest(this, "launch");
}

void FalconNine::prepLaunch(){
    this->getstate()->handleRequest(this, "prep");
}

void FalconNine::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;

    int num = 0;
    for (auto i = satellites.begin(); i != satellites.end(); i++) {    
           num++;
           //cout << "Satellite id: " << (*i)->getid() << endl;
    }
    cout << num << " Satellites onboard" << endl;
}

string FalconNine::getType(){
    return "FN";
}