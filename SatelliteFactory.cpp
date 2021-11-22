/**
 * @file SatelliteFactory.cpp
 * @author Runtime Terror
 * @brief Implementation of SatelliteFactory.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "SatelliteFactory.h"

SatelliteFactory::SatelliteFactory(){

}

SatelliteFactory::~SatelliteFactory(){
    
}

vector<Satellite*> SatelliteFactory::CreateAllSatellites(int numSatellites){
        satellites = createSatellites(numSatellites);
        return satellites;
}
