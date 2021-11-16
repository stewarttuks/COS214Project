#include "Crew.h"

Crew::Crew(string g){
    gender = g;
}

Crew::~Crew(){
    name = "";
    gender = "";
}

Crew::Crew(const Crew &c){
    this->name = c.name;
}

Crew* Crew::clone(){
    return new Crew(this->gender);
}

string Crew::getname(){
    return name;
}

void Crew::setname(string n){
    name = n;
}