#include "FalconNineBuilder.h"
#include <unistd.h>

FalconNineBuilder::FalconNineBuilder(){

}

FalconNineBuilder::~FalconNineBuilder(){

}

void FalconNineBuilder::addParts(){
     cout <<"Starting construction of ";
    
    addShell();
    sleep(1);
    addCores();
    sleep(1);
    addMerlinEngine();
    sleep(1);
    addVacuumEngine();
    sleep(1);
    addFuel();
    sleep(1);

    cout << "\nConstruction of " << builtRocket->getname() << " complete\n";
}

void FalconNineBuilder::addShell(){
     int unitNumber = rand() % 8999 + 1000;

    string name = "Falcon Nine - " + unitNumber;

    cout << name << "..." << endl;

    builtRocket = new FalconHeavy();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

void FalconNineBuilder::addCores(){
    cout << "Adding Falcon 9 Core\n";
}

void FalconNineBuilder::addMerlinEngine(){
    cout << "9 Merlin engines have been added\n";
}

void FalconNineBuilder::addVacuumEngine(){
    cout << "The Vacuum engine has been added\n";
}

void FalconNineBuilder::addFuel(){
    builtRocket->setFuel(1800);
}