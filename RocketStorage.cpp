#include "RocketStorage.h"

RocketStorage::RocketStorage(){

}

RocketStorage::~RocketStorage(){
    delete backup;
}

RocketBackup* RocketStorage::restoreRocket(){
    return backup;                      // I dont know if this is right -> I just needed to return something so that it complies
}

void RocketStorage::storeRocket(RocketBackup* rb){
    
}