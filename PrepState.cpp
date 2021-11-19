#include "PrepState.h"
#include "TestingState.h"

PrepState::PrepState(){

}

PrepState::~PrepState(){
    
}


void PrepState::handleRequest(Rocket* rocket, string request){
    if (request == "prep"){
        cout<<rocket->getname()<<" is being prepped."<<endl;
        sleep(1);
        cout<<"Securing rocket's payload"<<endl;
        sleep(1);
        cout<<"Fuel Tank filled"<<endl;
        sleep(1);
        cout << "Rocket Prepped.\n";
        sleep(1);
        rocket->setState(new TestingState());
        return;
    }

    if (request == "launch"){
        cout<<"***Rocket cannot be launched before it is prepared***\n";
    }
}

string PrepState::getString(){
    return "Preparation phase";
}