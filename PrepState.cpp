/**
 * @file PrepState.cpp
 * @author Runtime Terror
 * @brief Implementation of PrepState.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "PrepState.h"
#include "TestingState.h"

/**
 * Constructor
 * @author Runtime Terror
 */
PrepState::PrepState(){

}

/**
 * Destructor
 * @author Runtime Terror
 */
PrepState::~PrepState(){
    
}

/**
 * Will handle the request dependent of what the request is
 * @author Runtime Terror
 * @param[in] rocket*  The rocket calling the request
 * @param[in] string  The request that the rocket has sent
 * @return void
 */
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

/**
 * Gets the description of the state
 * @author Runtime Terror
 * @return string  The description of the state
 */
string PrepState::getString(){
    return "Preparation phase";
}