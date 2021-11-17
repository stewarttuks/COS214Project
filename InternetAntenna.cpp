#include "InternetAntenna.h"

InternetAntenna::InternetAntenna(){

}

InternetAntenna::~InternetAntenna(){

}

// void InternetAntenna::attach(Satellite* s){

// }

// void InternetAntenna::detach(Satellite* s){

// }

// void InternetAntenna::notify(){

// }

void InternetAntenna::setSignal(string s){
    signal = s;
}

string InternetAntenna::getSignal(){
    return signal;
}