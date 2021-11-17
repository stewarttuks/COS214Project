#include "RocketBackup.h"

RocketBackup::RocketBackup(string n, int f){
    this->name = n;
    this->fuel = f;
}

RocketBackup::~RocketBackup(){
    
}

void RocketBackup::setBackupFuel(int f){
    this->fuel = f;
}

void RocketBackup::setBackupName(string n){
    this->name = n;
}