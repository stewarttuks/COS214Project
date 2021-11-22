/**
 * @file Crew.cpp
 * @author Runtime Terror
 * @brief Implementation of Crew.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "Crew.h"

/**
 * Constructor
 * @author Runtime Terror
 * @param[in] g  The gender of the crew member
 */
Crew::Crew(string g){
    gender = g;
}

/**
 * Destructor
 * @author Runtime Terror
 */
Crew::~Crew(){
    gender = "";
}

/**
 * Copy construcor for Crew members
 * @author Runtime Terror
 * @param[in] c  The reference crew object
 */
Crew::Crew(const Crew &c){
    this->gender = c.gender;
}


/**
 * Clone a Crew object
 * @author Runtime Terror
 * @return Crew*
 */
Crew* Crew::clone(){
    return new Crew(this->gender);
}

/**
 * Get the gender of the crew member
 * @author Runtime Terror
 * @return string
 */
string Crew::getgender(){

    if(gender == "Male" || gender == "Female" || gender == "female" || gender == "male" || gender == "female"){
        return gender;
    }

    throw std::invalid_argument("Invalid Gender"); 

}