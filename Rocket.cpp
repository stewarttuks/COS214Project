#include "Rocket.h"

Rocket::Rocket(){

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

void Rocket::setState(RocketState* s){
    state = s;
}

void Rocket::setName(string n){
    name = n;
}

void Rocket::setFuel(int f){
    fuel = f;
}

void Rocket::loadCrew(vector<Crew*> c){
    crew = c;
    numCrewMembers = c.size();
}

void Rocket::loadCargo(vector<Cargo*> c){
    cargo = c;
    numCargoBoxes = c.size();
}

void Rocket::loadSatellites(vector<Satellite*> s){
    satellites = s;
    numSatellites = s.size();
}