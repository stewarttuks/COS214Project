#include "Crew.h"

Crew::Crew(string n){
    name = n;
}

Crew::~Crew(){
    name = "";
}

Crew::Crew(const Crew &c){
    this->name = c.name;
}

Crew* Crew::clone(string n){
    return new Crew(n);
}

string Crew::getname(){
    return name;
}