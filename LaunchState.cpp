#include "LaunchState.h"

LaunchState::LaunchState(){

}

LaunchState::~LaunchState(){
    
}


void LaunchState::handleRequest(Rocket* rocket, string request){
    if (request == "launch"){
        cout<<rocket->getname()<<" has initiated a launch."<<endl;
        return;
    }
    if (request == "prep"){
        cout<<"***" << rocket->getname() << " has already been prepped.***\n";
    }
}

string LaunchState::getString(){
    return "Ready for launch";
}