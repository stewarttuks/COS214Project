#include "SatelliteVector.h"

SatelliteVector::SatelliteVector(){

}

SatelliteVector::~SatelliteVector(){
    
}

SatelliteIterator* SatelliteVector::createIterator(){
    return new SatelliteIterator(satellites);                
}

void SatelliteVector::add(Satellite* s){
    satellites.push_back(s);
}
