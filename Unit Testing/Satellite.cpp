/**
 * @file Satellite.cpp
 * @author Runtime Terror
 * @brief Implementation of Satellite.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Satellite.h"
 
/**
 * Constructor
 * @author Runtime Terror
 * @param[in] i  id of the satellite
 */
Satellite::Satellite(int i){
    id = i;
}
 
/**
 * Destructor
 * @author Runtime Terror
 */
Satellite::~Satellite(){
    id = 0;
}
 
/**
 * Returns the ID.
 * @author Runtime Terror
 * @return id  int  ID of the satellite
 */
int Satellite::getid(){
    return id;
}
 
/**
 * sets the ID
 * @author Runtime Terror
 * @param[in] i  ID to be set
 * @return void
 */
void Satellite::setid(int i){
    id = i;
}
 
// Antenna* Satellite::getantenna(){
//     return antenna;
// }
 
// void Satellite::setantenna(Antenna* a){
//     antenna = a;
// }
 
/**
 * Receives a message from SpaceX Station
 * @author Runtime Terror
 * @param[in] message  The message being received.
 * @return void
 */
void Satellite::receiveMessage(string message){
    cout << "Satellite " << id << " has received message from SpaceX Station: " << message << endl;
}
 

