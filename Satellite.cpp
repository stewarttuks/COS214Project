/**
 * @file Satellite.cpp
 * @author Runtime Terror
 * @brief Implementation of Satellite.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Satellite.h"

Satellite::Satellite(int i){
    id = i;
}

Satellite::~Satellite(){
    id = 0;
}

int Satellite::getid(){
    return id;
}

void Satellite::setid(int i){
    id = i;
}

void Satellite::receiveMessage(string message){
    cout << "Satellite " << id << " has received message from SpaceX Station: " << message << endl;
}
