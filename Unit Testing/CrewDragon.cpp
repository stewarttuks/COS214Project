/**
 * @file CrewDragon.cpp
 * @author Runtime Terror
 * @brief Implementation of CrewDragon.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "CrewDragon.h"

/**
 * Constructor
 * @author Runtime Terror
 */
CrewDragon::CrewDragon(){
}

/**
 * Destructor
 * @author Runtime Terror
 */
CrewDragon::~CrewDragon(){
    for (auto i = crew.begin(); i != crew.end(); i++)
        delete *i;

    for (auto i = cargo.begin(); i != cargo.end(); i++)
        delete *i;

    numCrewMembers = 0;
    numCargoBoxes = 0;
}


/**
 * Sends a launch command to the current state
 * @author Runtime Terror
 * @return void
 */
void CrewDragon::launch(){
    this->getstate()->handleRequest(this, "launch");
}

/**
 * Sends a prep command to the current state
 * @author Runtime Terror
 * @return void
 */
void CrewDragon::prepLaunch(){
    this->getstate()->handleRequest(this, "prep");
}

/**
 * Gets the summary of a rocket to the console
 * @author Runtime Terror
 * @return void
 */
void CrewDragon::getSummary(){
    cout << "Properties of " << this->getname() << ": "<< endl;
    cout << "Fuel: " << this->getfuel() << " Gl" << endl << endl;
    
    cout << "Contents of " << this->getname() << ": " << endl;
    
    int p=1;
    for (auto i = crew.begin(); i != crew.end(); i++)      
    {
        cout << "Crew Member " << p++ << " (" << (*i)->getgender()<< ") "<< endl;
    }
    
    int c =0;
    cout << endl;
    for (auto i = cargo.begin(); i != cargo.end(); i++)      
            cout << "Cargo crate "<< ++c << ": " << (*i)->getDescription() << endl;
}

/**
 * Gets the type of the rocket
 * @author Runtime Terror
 * @return string  The type of rocket
 */
string CrewDragon::getType(){
    return "CD";
}