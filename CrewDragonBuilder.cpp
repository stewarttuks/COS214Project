#include "CrewDragonBuilder.h"
#include <unistd.h>

CrewDragonBuilder::CrewDragonBuilder(){

}

CrewDragonBuilder::~CrewDragonBuilder(){

}

void CrewDragonBuilder::addParts(){
    cout <<"Starting construction of ";
    
    addShell();
    sleep(1);
    addSeats();
    sleep(1);
    addCrates();
    sleep(1);
    addDragonEngine();
    sleep(1);
    addFuel();
    sleep(1);

    cout << "\nConstruction of " << builtRocket->getname() << " complete\n";
}

void CrewDragonBuilder::addShell(){
    int unitNumber = rand() % 8999 + 1000;

    string name = "Crew Dragon - " + unitNumber;

    cout << name << "..." << endl;

    builtRocket = new FalconHeavy();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

void CrewDragonBuilder::addSeats(){
    cout << "Seats have been added for crew\n";
}

void CrewDragonBuilder::addDragonEngine(){
    cout << "Dragon engine has been secured\n";
}

void CrewDragonBuilder::addCrates(){
    cout << "Storare room ready for cargo\n";
}

void CrewDragonBuilder::addFuel(){
    builtRocket->setFuel(2500);
}