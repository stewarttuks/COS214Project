/**
 * @file Rocket.cpp
 * @author Runtime Terror
 * @brief Implementation of Rocket.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Rocket.h"


/**
 * Constructor
 * @author Runtime Terror
 */
Rocket::Rocket(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
Rocket::~Rocket(){
    name = "";
    delete state;
    fuel = 0;
}

/**
 * The template method, calls the child launch function
 * @author Runtime Terror
 * @return void
 */
void Rocket::activateLaunch(){
    cout << "Launch command issued..." << endl;
    launch();
}

/**
 * The template method, calls the child prep function
 * @author Runtime Terror
 * @return void
 */
void Rocket::activatePrepLaunch(){
    cout << "Prepare the Rocket!" << endl;
    prepLaunch();
}

/**
 * Get the name of the rocket
 * @author Runtime Terror
 * @return string  the name of the rocket
 */
string Rocket::getname(){
    return name;
}

/**
 * Get the fuel of the rocket
 * @return int  the fuel of the rocket
 */
int Rocket::getfuel(){
    return fuel;
}

/**
 * Gets the state of the rocket
 * @author Runtime Terror
 * @return RocketState*  the state of the rocket
 */
RocketState* Rocket::getstate(){
    return state;
}


/**
 * Sets the state of the rocket
 * @author Runtime Terror
 * @param[in] s  the state of the rocket 
 * @return void
 */
void Rocket::setState(RocketState* s){
    state = s;
}

/**
 * Sets the name of the rocket
 * @author Runtime Terror
 * @param[in] n  the name of the rocket
 * @return void
 */
void Rocket::setName(string n){
    name = n;
}

/**
 * Sets the fuel of the rocket
 * @author Runtime Terror
 * @param[in] f  the fuel of the rocket
 * @return void
 */
void Rocket::setFuel(int f){
    fuel = f;
}

/**
 * Adds the crew member to the rocket
 * @author Runtime Terror
 * @param[in] c  the crew member to be added
 * @return void
 */
void Rocket::loadCrew(Crew* c){
    crew.push_back(c);
    numCrewMembers++;
}

/**
 * Adds the cargo to the rocket
 * @author Runtime Terror
 * @param[in] c  the cargo to add
 * @return void
 */
void Rocket::loadCargo(Cargo* c){
    cargo.push_back(c);
    numCargoBoxes++;
}

/**
 * Sets the Satellite vector of the rocket
 * @author Runtime Terror
 * @param[in] s the satellite vector
 * @return void
 */
void Rocket::loadSatellites(vector<Satellite*> s){
    satellites = s;
    numSatellites = s.size();
}

/**
 * Get the description of the state of the rocket
 * @author Runtime Terror
 * @return string  description of the state
 */
string Rocket::getStateString(){
    return state->getString();
}

/**
 * Get the vector of satellites on the rocket
 * @author Runtime Terror
 * @return vector<Satellite*>  the vector of satellites on the rocket
 */
vector<Satellite*> Rocket::getSatelliteList(){
    return satellites;
}