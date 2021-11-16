#include "Cargo.h"

Cargo::Cargo(int w){
    weight = w;
}

Cargo::Cargo(const Cargo& c){
    description = c.description;
}

Cargo::~Cargo(){
    description = "";
}

Cargo* Cargo::clone(){
    return new Cargo(this->weight);
}

string Cargo::getDescription(){
    return description;
}

void Cargo::setDescription(string d){
        description = d;
}
