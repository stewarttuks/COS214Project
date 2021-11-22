/**
 * @file CrewDragonBuilder.cpp
 * @author Runtime Terror
 * @brief Implementation of CrewDragonBuilder.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "CrewDragonBuilder.h"
#include <unistd.h>
#include <time.h>

/**
 * Constructor
 * @author Runtime Terror
 */
CrewDragonBuilder::CrewDragonBuilder(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
CrewDragonBuilder::~CrewDragonBuilder(){

}

/**
 * Adds all of the componets of a rocket to construct a rocket object
 * @author Runtime Terror
 * @return void
 */
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

/**
 * Adds the basic details of a rocket
 * @author Runtime Terror
 * @return void
 */
void CrewDragonBuilder::addShell(){
    srand(time(NULL));
    int unitNumber = rand() % 8999 + 1000;

    string name = "Crew Dragon-" + to_string(unitNumber);

    cout << name << "..." << endl;

    builtRocket = new CrewDragon();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

/**
 * Constructing rocket
 * @author Runtime Terror
 * @return void
 */
void CrewDragonBuilder::addSeats(){
    cout << "Seats have been added for crew\n";
}

/**
 * Constructing rocket
 * @author Runtime Terror
 * @return void
 */
void CrewDragonBuilder::addDragonEngine(){
    cout << "Dragon engine has been secured\n";
}

/**
 * Constructing rocket
 * @author Runtime Terror
 * @return void
 */
void CrewDragonBuilder::addCrates(){
    cout << "Storage room ready for cargo\n";
}

/**
 * Constructing rocket
 * @author Runtime Terror
 * @return void
 */
void CrewDragonBuilder::addFuel(){
    builtRocket->setFuel(2500);
}