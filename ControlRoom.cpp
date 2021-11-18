#include "ControlRoom.h"

ControlRoom::ControlRoom(){
    
}

ControlRoom::~ControlRoom(){
    
}

void ControlRoom::protect(ControlRoom* c){
    
}

void ControlRoom::setReceiver(Rocket* r){
    buttons[0]->setRocket(r);
    buttons[1]->setRocket(r);
    buttons[2]->setRocket(r);
}

bool ControlRoom::authorise(string u, string p){
    return false;
}



