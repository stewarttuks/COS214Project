/**
 * @file RocketStorage.cpp
 * @author Runtime Terror
 * @brief Implementation of RocketStorage.h
 * @version 0.1
 * @date 2021-11-22
 */
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