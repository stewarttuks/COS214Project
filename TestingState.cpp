#include "TestingState.h"

TestingState::TestingState(){

}

TestingState::~TestingState(){
    
}

void TestingState::handleRequest(Rocket* rocket, string request){
    cout<<"Rocket '"<<rocket->getname()<<"' is being tested."<<endl;
}