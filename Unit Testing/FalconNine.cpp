/**
 * @file FalconNine.cpp
 * @author Runtime Terror
 * @brief Implementation of FalconNine.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "FalconNine.h"

/**
 * Construction
 * @author Runtime Terror
 */
FalconNine::FalconNine()
{

}

/**
 * Destructor
 * @author Runtime Terror
 */
FalconNine::~FalconNine(){
    for (auto i = satellites.begin(); i != satellites.end(); i++)
        delete *i;
        
    numSatellites = 0;
}

/**
 * Sends a launch command to state
 * @author Runtime Terror
 * @return void
 */
void FalconNine::launch(){
    this->getstate()->handleRequest(this, "launch");
}


/**
 * Sends a prep command to the state
 * @author Runtime Terror
 * @return void
 */
void FalconNine::prepLaunch(){
    this->getstate()->handleRequest(this, "prep");
}

/**
 * Gets the details of a rocket
 * @author Runtime Terror
 * @return void
 */
void FalconNine::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;

    int num = 0;
    for (auto i = satellites.begin(); i != satellites.end(); i++) {    
           num++;
           //cout << "Satellite id: " << (*i)->getid() << endl;
    }
    cout << num << " Satellites onboard" << endl;
}

/**
 * Gets the type of rocket
 * @author Runtime Terror
 * @return string  The type of rocket
 */
string FalconNine::getType(){
    return "FN";
}