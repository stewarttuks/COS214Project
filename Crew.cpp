#include "Crew.h"

Crew::Crew(string g){
    gender = g;
}

Crew::~Crew(){
    gender = "";
}

Crew::Crew(const Crew &c){
    this->gender = c.gender;
}

Crew* Crew::clone(){
    return new Crew(this->gender);
}


string Crew::getgender(){
    return gender;
}