/**
 * @file SatelliteFactory.cpp
 * @author Runtime Terror
 * @brief Implementation of SatelliteFactory.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "SatelliteFactory.h"
 
/**
 * Constructor
 * @author Runtime Terror
 */
SatelliteFactory::SatelliteFactory(){
 
}
 
/**
 * Destructor
 * @author Runtime Terror
 */
SatelliteFactory::~SatelliteFactory(){
   
}
 
/**
 * Creates a number of new satellites
 * @author Runtime Terror
 * @param[in] numSatellites The number of satellites to be created.
 * @return vector<Satellite*>  a vector containing the new satellites.
 */
vector<Satellite*> SatelliteFactory::CreateAllSatellites(int numSatellites){
        satellites = createSatellites(numSatellites);
        return satellites;
}
 

