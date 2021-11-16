#include "Satellite.h"

Satellite::Satellite(int i){
    id = i;
}

Satellite::~Satellite(){
    delete antenna;
    id = 0;
}

int Satellite::getid(){
    return id;
}

void Satellite::setid(int i){
    id = i;
}

Antenna* Satellite::getantenna(){
    return antenna;
}

void Satellite::setantenna(Antenna* a){
    antenna = a;
}
