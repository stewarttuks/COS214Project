/**
 * @file RocketStorage.cpp
 * @author Runtime Terror
 * @brief Implementation of RocketStorage.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "RocketStorage.h"
 
/**
 * Constructor
 * @author Runtime Terror
 */
RocketStorage::RocketStorage(){
    backup = nullptr;
}
 
/**
 * Destructor
 * @author Runtime Terror
 */
RocketStorage::~RocketStorage(){
    delete backup;
}
 
/**
 * Restores the rocket from a backup.
 * @author Runtime Terror
 * @param[in] rocket  Rocket that is being restored.
 * @return void
 */
void RocketStorage::restoreRocket(Rocket* rocket){
    rocket->setName(backup->getBackupName());
    rocket->setFuel(backup->getBackupFuel());
}
 
/**
 * Stores a RocketBackup
 * @author Runtime Terror
 * @param[in] rb  RocketBackup that will be stored.
 */
void RocketStorage::storeRocket(RocketBackup* rb){
    this->backup = rb;
}

