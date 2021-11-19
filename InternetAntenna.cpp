#include "InternetAntenna.h"

InternetAntenna::InternetAntenna(){
    satelliteList = new SatelliteVector();
}

InternetAntenna::~InternetAntenna(){

}

// Observer pattern implementation
void InternetAntenna::attach(Satellite* satellite){
    // add to the back of the satellite vector list
    satelliteList->add(satellite);
}

void InternetAntenna::notify(string message){
    SatelliteIterator* it = satelliteList->createIterator();

    while (it->hasNext() == true){
        it->current()->receiveMessage(message);
        it->next();
    }
}

void InternetAntenna::attachAll(vector<Satellite*> v){
    vector<Satellite*>::iterator it;
    for(it = v.begin(); it < v.end(); it++){
        attach(*it);
}
}