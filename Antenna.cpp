#include "Antenna.h"
// Subject in Observer design pattern

Antenna::Antenna(){
    satelliteList = new SatelliteVector();
}

Antenna::~Antenna(){

}

void Antenna::setSatelliteList(SatelliteVector* s){
    satelliteList = s;
}

SatelliteVector* Antenna::getSatelliteList(){
    return satelliteList;
}

