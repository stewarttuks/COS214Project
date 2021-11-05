#include "Rocket.h"

Rocket::Rocket(string n, int f, RocketState* s){
    name = n;
    fuel = f;
    state = s;
}

Rocket::~Rocket(){
    name = "";
    delete state;
    fuel = 0;
}

string Rocket::getname(){
    return name;
}

int Rocket::getfuel(){
    return fuel;
}

RocketState* Rocket::getstate(){
    return state;
}