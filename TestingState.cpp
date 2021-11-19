#include "TestingState.h"

TestingState::TestingState(){

}

TestingState::~TestingState(){
    
}

void TestingState::handleRequest(Rocket* rocket, string request){
    if (request == "launch"){
        cout<<"Test Launch for "<<rocket->getname()<<" began..."<<endl;
        return;
    }
    if (request == "prep"){
        cout<<"***" << rocket->getname() << " has already been prepped.***\n";
    } 
}

string TestingState::getString(){
    return "Testing";
}