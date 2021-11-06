#include "SatelliteVector.h"

SatelliteVector::SatelliteVector(){

}

SatelliteVector::~SatelliteVector(){
    for (auto i = satellites.begin(); i != satellites.end(); i++)
        delete *i;
}

SatelliteIterator* SatelliteVector::createIterator(){
    return new SatelliteIterator(satellites);                   // I don't know if this is right, but I just needed to return something so you can delete it
}