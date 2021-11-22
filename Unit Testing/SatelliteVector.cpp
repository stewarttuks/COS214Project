/**
 * @file SatelliteVector.cpp
 * @author Runtime Terror
 * @brief Implementation of SatelliteVector.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "SatelliteVector.h"
 
/**
 * Constructor
 * @author Runtime Terror
 */
SatelliteVector::SatelliteVector(){
 
}
 
/**
 * Destructor
 * @author Runtime Terror
 */
SatelliteVector::~SatelliteVector(){
   
}
 
/**
 * Creates an iterator for the Satellite class
 * @author Runtime Terror
 * @return SatelliteIterator*
 */
SatelliteIterator* SatelliteVector::createIterator(){
    return new SatelliteIterator(satellites);                
}
 
/**
 * Adds a satellite to the sattilite vector
 * @author Runtime Terror
 * @param[in] s  Pointer to the satellite being added.
 * @return void
 */
void SatelliteVector::add(Satellite* s){
    satellites.push_back(s);
}
 

