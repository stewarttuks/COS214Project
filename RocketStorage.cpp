#include "RocketStorage.h"

RocketStorage::RocketStorage(){
    backup = nullptr;
}

RocketStorage::~RocketStorage(){
    delete backup;
}

void RocketStorage::restoreRocket(Rocket* rocket){
    rocket->setName(backup->getBackupName());
    rocket->setFuel(backup->getBackupFuel());
}

void RocketStorage::storeRocket(RocketBackup* rb){
    this->backup = rb;
}