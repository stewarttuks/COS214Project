#include "Antenna.h"

Antenna::Antenna(){

}

Antenna::~Antenna(){
    for (auto i = satelliteList.begin(); i != satelliteList.end(); i++)
        delete *i;

}

void Antenna::setSatelliteList(vector<Satellite*> s){
    satelliteList = s;
}

vector<Satellite*> Antenna::getSatelliteList(){
    return satelliteList;
}

void Antenna::setSignal(string s){
    signal = s;
}

string Antenna::getSignal(){
    return signal;
}