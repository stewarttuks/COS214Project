#include "SatelliteFactory.h"

SatelliteFactory::SatelliteFactory(){

}

SatelliteFactory::~SatelliteFactory(){
    
}

vector<Satellite*> SatelliteFactory::CreateAllSatellites(int numSatellites){
        satellites = createSatellites(numSatellites);
        return satellites;
}
