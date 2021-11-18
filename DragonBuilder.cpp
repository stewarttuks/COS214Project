#include "DragonBuilder.h"
#include <unistd.h>

DragonBuilder::DragonBuilder(){

}

DragonBuilder::~DragonBuilder(){

}

void DragonBuilder::addParts(){
    cout <<"Starting construction of ";
    
    addShell();
    sleep(1);
    addCrates();
    sleep(1);
    addDragonEngine();
    sleep(1);

    cout << "\nConstruction of " << builtRocket->getname() << " complete\n";
}

void DragonBuilder::addShell(){
    int unitNumber = rand() % 8999 + 1000;

    string name = "Crew Dragon - " + unitNumber;

    cout << name << "..." << endl;

    builtRocket = new FalconHeavy();
    builtRocket->setName(name);

    sleep(1);
    cout << "Shell of Rocket has been added\n";
}

void DragonBuilder::addDragonEngine(){
    cout << "Dragon engine has been secured\n";
}

void DragonBuilder::addCrates(){
    cout << "Storare room ready for cargo\n";
}