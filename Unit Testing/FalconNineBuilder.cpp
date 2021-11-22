/**
 * @file FalconNineBuilder.cpp
 * @author Runtime Terror
 * @brief Implementation of FalconNineBuilder.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "FalconNineBuilder.h"
#include <unistd.h>

/**
 * Constructor
 * @author Runtime Terror
 */
FalconNineBuilder::FalconNineBuilder(){
}

/**
 * Destructor
 * @author Runtime Terror
 */
FalconNineBuilder::~FalconNineBuilder(){

}

/**
 * Start construction of the rocket
 * @author Runtime Terror
 * @return void
 */
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

/**
 * Add basic information about the rocket
 * @author Runtime Terror
 * @return void
 */
void FalconNineBuilder::addShell(){
    srand(time(NULL));
    int unitNumber = rand() % 8999 + 1000;

    string name = "Falcon Nine-"+ to_string(unitNumber);

    cout << name << "..." << endl;

    builtRocket = new FalconNine();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void FalconNineBuilder::addCores(){
    cout << "Adding Falcon 9 Core\n";
}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void FalconNineBuilder::addMerlinEngine(){
    cout << "9 Merlin engines have been added\n";
}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void FalconNineBuilder::addVacuumEngine(){
    cout << "The Vacuum engine has been added\n";
}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void FalconNineBuilder::addFuel(){
    builtRocket->setFuel(1800);
}