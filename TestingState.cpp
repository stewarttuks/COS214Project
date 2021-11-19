#include "TestingState.h"
#include "CrewDragon.h"
#include "Dragon.h"
#include "FalconNine.h"
#include "FalconHeavy.h"

TestingState::TestingState(){

}

TestingState::~TestingState(){
    
}

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

string TestingState::getString(){
    return "Testing";
}