/**
 * @file LaunchState.cpp
 * @author Runtime Terror
 * @brief Implementation of Launch.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "LaunchState.h"

/**
 * Constructor
 * @author Runtime Terror
 */
LaunchState::LaunchState(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
LaunchState::~LaunchState(){
    
}

/**
 * Will have a different execution state depending on the request
 * @author Runtime Terror
 * @param[in] rocket  The rocket calling the request
 * @param[in] request  The request that the rocket is sending
 * @return void
 */
void LaunchState::handleRequest(Rocket* rocket, string request){
    if (request == "launch"){
        cout<<rocket->getname()<<" has initiated a launch."<<endl;

        if (rocket->getType() == "D"){
            cout<<"Firing engines.\n";
            sleep(1);
            cout<<"Launch in...\n";
            sleep(1);
            cout << "3\n";
            sleep(1);
            cout << "2\n";
            sleep(1);
            cout << "1\n";
            sleep(2);
            cout<<rocket->getname()<<" launches into the atmosphere.\n";
            sleep(2);
            cout<<"Currently moving at 8Km/s\n";
            sleep(2);
            cout<<rocket->getname()<<" has reached the space station.\n";
            sleep(2);
            cout<<"Launch Successful!\n";
            sleep(1);
        }
        if (rocket->getType() == "CD"){
            cout<<"Firing engines.\n";
            sleep(1);
            cout<<"Launch in...\n";
            sleep(1);
            cout << "3\n";
            sleep(1);
            cout << "2\n";
            sleep(1);
            cout << "1\n";
            sleep(2);
            cout<<rocket->getname()<<" launches into the atmosphere.\n";
            sleep(2);
            cout<<"Currently moving at 7.77Km/s\n";
            sleep(2);
            cout<<rocket->getname()<<" has reached the space station.\n";
            sleep(2);
            cout<<"Crew members have reached the International Space Station.\n";
            sleep(2);
            cout<<"Returning back to Earth.\n";
            sleep(2);
            cout<<"Launch Successful!\n";
            sleep(1);
        }
        if (rocket->getType() == "FN"){
            cout<<"Firing Falcon 9 Core.\n";
            sleep(1);
            cout<<"Launch in...\n";
            sleep(1);
            cout << "3\n";
            sleep(1);
            cout << "2\n";
            sleep(1);
            cout << "1\n";
            sleep(2);
            cout<<rocket->getname()<<" has commenced phase 1 of launch.\n";
            sleep(2);
            cout<<"Core Engine has successfully landed on drone ship\n";
            sleep(2);
            cout<<"Initiated phase 2 of launch.\n";
            sleep(2);
            cout<<"All 9 Merlin engines have been activated.\n";
            sleep(2);
            cout<<rocket->getname()<<" has reached desired orbit.\n";
            sleep(2);
            cout<<"Satellites are being dispersed.\n";
            sleep(2);
            cout<<"Launch Successful!\n";
            sleep(1);
        }
        if (rocket->getType() == "FH"){
            cout<<"Firing Falcon 9 Core.\n";
            sleep(1);
            cout<<"Launch in...\n";
            sleep(1);
            cout << "3\n";
            sleep(1);
            cout << "2\n";
            sleep(1);
            cout << "1\n";
            sleep(1);
            cout<<rocket->getname()<<" has commenced phase 1 of launch.\n";
            sleep(2);
            cout<<"Core Engine has successfully landed on drone ship\n";
            sleep(2);
            cout<<"Initiated phase 2 of launch.\n";
            sleep(2);
            cout<<"All 27 Merlin engines have been activated.\n";
            sleep(2);
            cout<<rocket->getname()<<" has reached desired orbit.\n";
            sleep(2);
            cout<<"Satellites are being dispersed.\n";
            sleep(2);
            cout<<"Launch Successful!\n";
            sleep(1);
        }
        rocket->setFuel(0);
        return;
    }
    if (request == "prep"){
        cout<<"***" << rocket->getname() << " has already been prepped.***\n";
    }
}

/**
 * Get the description of the state
 * @author Runtime Terror
 * @return string  description of the state
 */
string LaunchState::getString(){
    return "Ready for launch";
}