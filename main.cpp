#include <iostream>
#include <vector>

#include "Crew.h"
#include "Cargo.h"
#include "InternetSatellite.h"
#include "InternetSatelliteFactory.h"
#include "CrewDragon.h"
#include "Dragon.h"
#include "FalconHeavy.h"
#include "FalconNine.h"

using namespace std;

int main(){    
    //Testing and Populating Rockets
    cout << "__________________Crew Dragon Rocket__________________" << endl;

    //Rocket properties
    string CrewDragonname = "Crew Dragon II";
    int CrewDragonfuel = 100000;
    RocketState* CrewDragonstate = NULL;
    
    // Create Crew for CrewDragon
    vector<Crew*> crewListCrewDragon;
    crewListCrewDragon.push_back(new Crew("Jason"));
    crewListCrewDragon.push_back(new Crew("Adam"));
    crewListCrewDragon.push_back(crewListCrewDragon.at(0)->clone("Todd"));
    crewListCrewDragon.push_back(crewListCrewDragon.at(1)->clone("Danny"));

    //Create Cargo for Dragon
    vector<Cargo*> cargoListCrewDragon;
    cargoListCrewDragon.push_back(new Cargo("Food"));
    cargoListCrewDragon.push_back(new Cargo("Equipment"));
    cargoListCrewDragon.push_back(cargoListCrewDragon.at(0)->clone("Clothing"));
    cargoListCrewDragon.push_back(cargoListCrewDragon.at(1)->clone("Suppies"));

    Rocket* CrewDragonRocket = new CrewDragon(crewListCrewDragon.size(), crewListCrewDragon, cargoListCrewDragon.size(), cargoListCrewDragon, CrewDragonname, CrewDragonfuel, CrewDragonstate);
    CrewDragonRocket->getSummary();

     cout << endl << "__________________Dragon Rocket__________________" << endl;

    //Rocket properties
    string Dragonname = "Dragon II";
    int Dragonfuel = 500000;
    RocketState* Dragonstate = NULL;

    //Create Cargo for CrewDragon
    vector<Cargo*> cargoListDragon;
    cargoListDragon.push_back(new Cargo("Food"));
    cargoListDragon.push_back(cargoListDragon.at(0)->clone("Clothing"));
    cargoListDragon.push_back(cargoListDragon.at(1)->clone("Suppies"));

    Rocket* DragonRocket = new Dragon(cargoListDragon.size(), cargoListDragon, Dragonname, Dragonfuel, Dragonstate);
    DragonRocket->getSummary();

    cout << endl << "__________________Falcon Nine Rocket__________________" << endl;

    //Rocket properties
    string FalconNinename = "Falcon Nine II";
    int FalconNinefuel = 200000;
    RocketState* FalconNinestate = NULL;

    //Create Satellite for Falcon Nine
     SatelliteFactory* factory = new InternetSatelliteFactory();                                 //createFactory
     vector<Satellite*> FalconNineSatellites = factory->CreateAllSatellites(80);

    Rocket* FalconNineRocket = new FalconNine(FalconNineSatellites.size(), FalconNineSatellites, FalconNinename, FalconNinefuel, FalconNinestate);
    FalconNineRocket->getSummary();


    cout << endl << "__________________Falcon Heavy Rocket__________________" << endl;

    //Rocket properties
    string FalconHeavyname = "Falcon Heavy II";
    int FalconHeavyfuel = 300000;
    RocketState* FalconHeavystate = NULL;

    //Create Satellite for Falcon Nine
     vector<Satellite*> FalconHeavySatellites = factory->CreateAllSatellites(100);

    Rocket* FalconHeavyRocket = new FalconHeavy(FalconHeavySatellites.size(), FalconHeavySatellites, FalconHeavyname, FalconHeavyfuel, FalconHeavystate);
    FalconHeavyRocket->getSummary();

    return 0;
}