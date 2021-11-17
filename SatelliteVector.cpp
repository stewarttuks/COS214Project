#include "SatelliteVector.h"

SatelliteVector::SatelliteVector(){

}

SatelliteVector::~SatelliteVector(){
    for (auto i = satellites.begin(); i != satellites.end(); i++)
        delete *i;
}

SatelliteIterator* SatelliteVector::createIterator(){
    return new SatelliteIterator(satellites);                
}