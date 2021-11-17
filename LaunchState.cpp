#include "LaunchState.h"

LaunchState::LaunchState(){

}

LaunchState::~LaunchState(){
    
}


void LaunchState::handleRequest(Rocket* rocket, string request){
    cout<<"Rocket '"<<rocket->getname()<<"' is being launched."<<endl;
}