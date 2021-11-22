/**
 * @file Dragon.cpp
 * @author Runtime Terror
 * @brief Implementation of ControlDragonPanel.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Dragon.h"

/**
 * Constructor
 * @author Runtime Terror
 */
Dragon::Dragon(){
}

/**
 * Destructor
 * @author Runtime Terror
 */
Dragon::~Dragon(){
    for (auto i = cargo.begin(); i != cargo.end(); i++)
        delete *i;
    numCargoBoxes = 0;
}

/**
 * Sends a launch command to the state
 * @author Runtime Terror
 * @return void
 */
void Dragon::launch(){
    this->getstate()->handleRequest(this, "launch");
}

/**
 * Sends a prep command to the state
 * @author Runtime Terror
 * @return void
 */
void Dragon::prepLaunch(){
    this->getstate()->handleRequest(this, "prep");
}

/**
 * Gets the summary of the rocket
 * @author Runtime Terror
 * @return void
 */
void Dragon::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;

    for (auto i = cargo.begin(); i != cargo.end(); i++)      
            cout << "Cargo description: " << (*i)->getDescription() << endl;
}

/**
 * Gets the type of rocket
 * @author Runtime Terror
 * @return string  The type of rocket
 */
string Dragon::getType(){
    return "D";
}
