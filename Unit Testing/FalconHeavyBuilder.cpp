/**
 * @file FalconHeavyBuilder.cpp
 * @author Runtime Terror
 * @brief Implementation of FalconHEavyBuilder.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "FalconHeavyBuilder.h"
#include <unistd.h>

/**
 * Constructor
 * @author Runtime Terror
 */
FalconHeavyBuilder::FalconHeavyBuilder(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
FalconHeavyBuilder::~FalconHeavyBuilder(){

}


/**
 * Start construction of rocket object
 * @author Runtime Terror
 * @return void
 */
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


/**
 * Adds basic details to the rocket
 * @author Runtime Terror
 * @return void
 */
void FalconHeavyBuilder::addShell(){
    srand(time(NULL));
    int unitNumber = rand() % 8999 + 1000;

    string name = "Falcon Heavy-" +to_string(unitNumber);

    cout << name << "..." << endl;

    builtRocket = new FalconHeavy();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

/**
 * Construction if rocket
 * @author Runtime Terror
 */
void FalconHeavyBuilder::addCores(){
    cout << "Adding First Falcon 9 Core\n";
    sleep(1);
    cout << "Adding Second Falcon 9 Core\n";
    sleep(1);
    cout << "Adding Third Falcon 9 Core\n";
}

/**
 * Construction if rocket
 * @author Runtime Terror
 */
void FalconHeavyBuilder::addMerlinEngine(){
    cout << "27 Merlin engines have been added\n";
}

/**
 * Construction if rocket
 * @author Runtime Terror
 */
void FalconHeavyBuilder::addVacuumEngine(){
    cout << "The Vacuum engine has been added\n";
}

/**
 * Construction if rocket
 * @author Runtime Terror
 */
void FalconHeavyBuilder::addFuel(){
    builtRocket->setFuel(1200);
}