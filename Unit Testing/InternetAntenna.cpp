/**
 * @file InternetAntenna.cpp
 * @author Runtime Terror
 * @brief Implementation of InternetAntenna.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "InternetAntenna.h"

/**
 * Construction
 * @author Runtime Terror
 */
InternetAntenna::InternetAntenna(){
    satelliteList = new SatelliteVector();
}

/**
 * Destructor
 * @author Runtime Terror
 */
InternetAntenna::~InternetAntenna(){

}

/**
 * Attach the observer to the subject
 * @author Runtime Terror
 * @param[in] 
 * @return void
 */
void InternetAntenna::attach(Satellite* satellite){
    satelliteList->add(satellite);
}

/**
 * Send a message to all the Satellites
 * @author Runtime Terror
 * @param[in] message  The message to send to all the Satellites 
 * @return void
 */
void InternetAntenna::notify(string message){
    SatelliteIterator* it = satelliteList->createIterator();

    while (it->hasNext() == true){
        it->current()->receiveMessage(message);
        it->next();
    }
}

/**
 * Attach all of the satellites
 * @author Runtime Terror
 * @param[in] v  Vector of satellites
 * @return void
 */
void InternetAntenna::attachAll(vector<Satellite*> v){
    vector<Satellite*>::iterator it;
    for(it = v.begin(); it < v.end(); it++){
        attach(*it);
    }
}