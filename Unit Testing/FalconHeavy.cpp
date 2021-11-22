/**
 * @file FalconHeavy.cpp
 * @author Runtime Terror
 * @brief Implementation of FalconHeavy.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "FalconHeavy.h"

/**
 * Constructor
 * @author Runtime Terror
 */
FalconHeavy::FalconHeavy()
{
}

/**
 * Destructor
 * @author Runtime Terror
 */
FalconHeavy::~FalconHeavy(){
    for (auto i = satellites.begin(); i != satellites.end(); i++)
        delete *i;
        
    numSatellites = 0;
}


/**
 * Sends a launch command to the state
 * @author Runtime Terror
 * @return void
 */
void FalconHeavy::launch(){
    this->getstate()->handleRequest(this, "launch");
}


/**
 * Sends a prep command to the state
 * @author Runtime Terror
 * @return void
 */
void FalconHeavy::prepLaunch(){
    this->getstate()->handleRequest(this, "prep");
}

/**
 * Gets the summary of rocket details to the console
 * @author Runtime Terror
 * @return void
 */
void FalconHeavy::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;

    int num = 0;
    for (auto i = satellites.begin(); i != satellites.end(); i++){  
           num++;
           //cout << "Satellite id: " << (*i)->getid() << endl;
    }
    cout << num << " Satellites onboard" << endl;
}

/**
 * Get the type of the rocket
 * @author Runtime Terror
 * @return string  The type of rocket
 */
string FalconHeavy::getType(){
    return "FH";
}