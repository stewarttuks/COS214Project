#include "RocketStorage.h"

RocketStorage::RocketStorage(){
    backup = nullptr;
}

RocketStorage::~RocketStorage(){
    delete backup;
}

RocketBackup* RocketStorage::restoreRocket(){
    return backup;
}

void RocketStorage::storeRocket(RocketBackup* rb){
    this->backup = rb;
}