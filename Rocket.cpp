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

void Rocket::activateLaunch(){
    cout << "Activating Launch" << endl;
    cout << "Launch will begin in 3 2 1..." << endl;
    launch();
}

void Rocket::prepLaunch(){
    cout << "Preparing..." << endl;
    prepLaunch();
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