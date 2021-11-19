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

// Antenna* Satellite::getantenna(){
//     return antenna;
// }

// void Satellite::setantenna(Antenna* a){
//     antenna = a;
// }

void Satellite::receiveMessage(string message){
    cout << "Satellite " << id << " has received message from SpaceX Station: " << message << endl;
}
