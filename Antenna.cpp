#include "Antenna.h"
// Subject in Observer design pattern

Antenna::Antenna(){

}

Antenna::~Antenna(){
    for (auto i = satelliteList.begin(); i != satelliteList.end(); i++)
        delete *i;

}
// Observer pattern implementation
void Antenna::attach(Satellite* satellite){
    // add to the back of the satellite vector list
    satelliteList.push_back(satellite);
}

void Antenna::detach(Satellite* satellite){
    int size = satelliteList.size();
    if(size > 0){

        int i = 0;

        while(i < size){

            if(satelliteList.at(i) == satellite){

                satelliteList.erase(satelliteList.begin() + i);
            }

            i++;
        }
    }
}

void Antenna::notify(){
    int size = satelliteList.size();
    if(size > 0){
        int i = 0;

        while(i < size){
            // satelliteList.at(i)->update();
            // uncomment when observer is ready :)
            i++;
        }
    }
}

// Getters and setters

void Antenna::setSatelliteList(vector<Satellite*> s){
    satelliteList = s;
}

vector<Satellite*> Antenna::getSatelliteList(){
    return satelliteList;
}

// void Antenna::setSignal(string s){
//     signal = s;
// }

// string Antenna::getSignal(){
//     return signal;
// }