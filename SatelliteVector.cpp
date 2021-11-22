/**
 * @file SatelliteVector.cpp
 * @author Runtime Terror
 * @brief Implementation of SatelliteVector.h
 * @version 0.1
 * @date 2021-11-22
 */
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
