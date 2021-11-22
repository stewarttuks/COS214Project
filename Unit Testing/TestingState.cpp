/**
 * @file TestingState.cpp
 * @author Runtime Terror
 * @brief Implementation of TestingState.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "TestingState.h"
#include "CrewDragon.h"
#include "Dragon.h"
#include "FalconNine.h"
#include "FalconHeavy.h"
 
/**
 * Constructor
 * @author Runtime Terror
 */
TestingState::TestingState(){
 
}
 
/**
 * Destructor
 * @author Runtime Terror
 */
TestingState::~TestingState(){
   
}
 
/**
 * Tests the launch of a rocket
 * @author Runtime Terror
 * @param[in] rocket  Pointer to a rocket
 * @param[in] request  The request to launch
 * @return void
 */
void TestingState::handleRequest(Rocket* rocket, string request){
    if (request == "launch"){
        cout<<"Test Launch for "<<rocket->getname()<<" began..."<<endl;
        if (rocket->getType() == "D"){
            cout<<"Firing engines.\n";
            sleep(1);
            cout<<"Checking cargo crates.\n";
            sleep(1);
            cout<<"Measuring fuel consumption.\n";
            sleep(1);
            cout<<"Test Successful.\n";
            sleep(1);
        }
        if (rocket->getType() == "CD"){
            cout<<"Firing engines.\n";
            sleep(1);
            cout<<"Checking cargo crates.\n";
            sleep(1);
            cout<<"Recording Crew heart rates.\n";
            sleep(1);
            cout<<"Measuring fuel consumption.\n";
            sleep(1);
            cout<<"Test Successful.\n";
            sleep(1);
        }
        if (rocket->getType() == "FN"){
            cout<<"Initiate static fire.\n";
            sleep(1);
            cout<<"Testing engine.\n";
            sleep(1);
            cout<<"Satellite shake test.\n";
            sleep(1);
            cout<<"Test Successful.\n";
            sleep(1);
        }
        if (rocket->getType() == "FH"){
            cout<<"Initiate static fire.\n";
            sleep(1);
            cout<<"Testing engine.\n";
            sleep(1);
            cout<<"Satellites still in place.\n";
            sleep(1);
            cout<<"Heat of Rocket mesured.\n";
            sleep(1);
            cout<<"Test Successful.\n";
            sleep(1);
        }
        return;
    }
    if (request == "prep"){
        cout<<"***" << rocket->getname() << " has already been prepped.***\n";
    }
}
 
/**
 * Returns a string representing the state
 * @author Runtime Terror
 * @return string  Represents the current state
 */
string TestingState::getString(){
    return "Testing";
}

