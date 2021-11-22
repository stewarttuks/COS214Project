/**
 * @file Antenna.cpp
 * @author Runtime Terror
 * @brief Implementation of Antenna.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Antenna.h"
// Subject in Observer design pattern

/**
 * Construct a new Antenna:: Antenna object
 * 
 */
Antenna::Antenna(){
    satelliteList = new SatelliteVector();
}

/**
 * Destructor
 * @author Runtime Terror
 */
Antenna::~Antenna(){

}

/**
 * sets the SatelliteVector of Satellites to be communicated with
 * @author Runtime Terror
 * @param[in] s  The SatelliteVector object holding all the satellites
 * @return void
 */
void Antenna::setSatelliteList(SatelliteVector* s){
    satelliteList = s;
}

/**
 * get the SatelliteVector of Satellites
 * @author Runtime Terror
 * @return SatelliteVector* held by the Antenna
 */
SatelliteVector* Antenna::getSatelliteList(){
    return satelliteList;
}

