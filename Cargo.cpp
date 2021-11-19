#include "Cargo.h"


Cargo::Cargo(int v){
    volume = v;
    description = "Cargo Crate: Volume = " + to_string(v);
}

Cargo::Cargo(const Cargo& c){
    description = c.description;
}

Cargo::~Cargo(){
    description = "";
}

Cargo* Cargo::clone(){
    return new Cargo(this->volume);
}

string Cargo::getDescription(){
    return description;
}

void Cargo::setDescription(string d){
        description = d;
}
