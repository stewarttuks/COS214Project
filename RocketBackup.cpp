/**
 * @file RocketBackup.cpp
 * @author Runtime Terror
 * @brief Implementation of RocketBackup.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "RocketBackup.h"

/**
 * Constructor
 * @author Runtime Terror
 * @param[in] rocket  the rocket to be stored
 */
RocketBackup::RocketBackup(Rocket* rocket){
    setBackupFuel(rocket->getfuel());
    setBackupName(rocket->getname());
}

/**
 * Destructor
 * @author Runtime Terror
 */
RocketBackup::~RocketBackup(){
    
}

/**
 * Back up the fuel of the rocket
 * @author Runtime Terror
 * @param[in] f  the fuel
 * @return void
 */
void RocketBackup::setBackupFuel(int f){
    this->fuel = f;
}

/**
 * Back up the name of the rocket
 * @author Runtime Terror
 * @param[in]n the name of the rocket 
 * @return void
 */
void RocketBackup::setBackupName(string n){
    this->name = n;
}

/**
 * Get the backed up fuel of the rocket
 * @author Runtime Terror
 * @return int  the fuel of the back up
 */
int RocketBackup::getBackupFuel(){
    return this->fuel;
}

/**
 * Get the name of the back uped rocket
 * @author Runtime Terror
 * @return string  The name of the rocket
 */
string RocketBackup::getBackupName(){
    return this->name;
}

