/**
 * @file Cargo.cpp
 * @author Runtime Terror
 * @brief Implementation of Cargo.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Cargo.h"

/**
 * Constructor
 * @author Runtime Terror
 * @param[in] v  The volume of a crate 
 */
Cargo::Cargo(int v){
    volume = v;
    description = "Cargo Crate: Volume = " + to_string(v);
}

/**
 * Copy construcor
 * @author Runtime Terror
 * @param[in] c  A reference to the Cargo object to be copied 
 */
Cargo::Cargo(const Cargo& c){
    description = c.description;
}

/**
 * Destructor
 * @author Runtime Terror
 */
Cargo::~Cargo(){
    description = "";
}

/**
 * Clones A cargo object 
 * @return Cargo*
 */
Cargo* Cargo::clone(){
    return new Cargo(this->volume);
}

/**
 * Get the description of a cargo crate
 * @author Runtime Terror
 * @return string  description of a cargo
 */
string Cargo::getDescription(){
    return description;
}

/**
 * Sets the description of a cargo crate
 * @author Runtime Terror
 * @param[in] d 
 * @return void
 */
void Cargo::setDescription(string d){
        description = d;
}
