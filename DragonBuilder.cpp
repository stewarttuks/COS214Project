/**
 * @file DragonBuilder.cpp
 * @author Runtime Terror
 * @brief Implementation of DragonBuilder.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "DragonBuilder.h"
#include <unistd.h>


/**
 * Constructor
 * @author Runtime Terror
 */
DragonBuilder::DragonBuilder(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
DragonBuilder::~DragonBuilder(){

}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void DragonBuilder::addParts(){
    cout <<"Starting construction of ";
    
    addShell();
    sleep(1);
    addCrates();
    sleep(1);
    addDragonEngine();
    sleep(1);
    addFuel();
    sleep(1);

    cout << "\nConstruction of " << builtRocket->getname() << " complete\n";
}

/**
 * Construction of rocket, adds basic details of the rocket
 * @author Runtime Terror
 * @return void
 */
void DragonBuilder::addShell(){
    srand(time(NULL));
    int unitNumber = rand() % 8999 + 1000;

    string name = "Dragon-" + to_string(unitNumber);

    cout << name << "..." << endl;

    builtRocket = new Dragon();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void DragonBuilder::addDragonEngine(){
    cout << "Dragon engine has been secured\n";
}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void DragonBuilder::addCrates(){
    cout << "Storage room ready for cargo\n";
}

/**
 * Construction of rocket
 * @author Runtime Terror
 * @return void
 */
void DragonBuilder::addFuel(){
    builtRocket->setFuel(2000);
}