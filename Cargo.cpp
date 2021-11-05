#include "Cargo.h"

Cargo::Cargo(string d){
    description = d;
}

Cargo::Cargo(const Cargo& c){
    description = c.description;
}

Cargo::~Cargo(){
    description = "";
}

Cargo* Cargo::clone(string d){
    return new Cargo(d);
}

string Cargo::getdescription(){
    return description;
}
