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