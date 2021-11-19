#include "RocketBackup.h"

RocketBackup::RocketBackup(Rocket* rocket){
    setBackupFuel(rocket->getfuel());
    setBackupName(rocket->getname());
}

RocketBackup::~RocketBackup(){
    
}

void RocketBackup::setBackupFuel(int f){
    this->fuel = f;
}

void RocketBackup::setBackupName(string n){
    this->name = n;
}

int RocketBackup::getBackupFuel(){
    return this->fuel;
}

string RocketBackup::getBackupName(){
    return this->name;
}

