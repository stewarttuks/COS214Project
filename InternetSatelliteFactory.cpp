/**
 * @file InternetSatelliteFactory.cpp
 * @author Runtime Terror
 * @brief Implementation of InternetSatelliteFactory.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "InternetSatelliteFactory.h"

InternetSatelliteFactory::InternetSatelliteFactory(){

}

InternetSatelliteFactory::~InternetSatelliteFactory(){

}

vector<Satellite*> InternetSatelliteFactory::createSatellites(int numSatellites){

    vector<Satellite*> satellites;
    
    for(int i = 0; i < numSatellites; i++){
        satellites.push_back(new InternetSatellite(i));
    }

    return satellites;
}