#include "FalconHeavyBuilder.h"
#include <unistd.h>

FalconHeavyBuilder::FalconHeavyBuilder(){

}

FalconHeavyBuilder::~FalconHeavyBuilder(){

}

void FalconHeavyBuilder::addParts(){

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

void FalconHeavyBuilder::addShell(){
    int unitNumber = rand() % 8999 + 1000;

    string name = "Falcon Heavy - " + unitNumber;

    cout << name << "..." << endl;

    builtRocket = new FalconHeavy();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

void FalconHeavyBuilder::addCores(){
    cout << "Adding First Falcon 9 Core\n";
    sleep(1);
    cout << "Adding Second Falcon 9 Core\n";
    sleep(1);
    cout << "Adding Third Falcon 9 Core\n";
}

void FalconHeavyBuilder::addMerlinEngine(){
    cout << "27 Merlin engines have been added\n";
}

void FalconHeavyBuilder::addVacuumEngine(){
    cout << "The Vacuum engine has been added\n";
}

void FalconHeavyBuilder::addFuel(){
    builtRocket->setFuel(1200);
}