#include "Button.h"

Button::Button(Command* c){
    command = c;
}

Button::~Button(){
    delete command;
}

void Button::press(){
    if (command)
        command->execute();
}

void Button::setOperation(Command* c){
    command = c;
}

void Button::setRocket(Rocket* r){
    if (command)
        command->setRocket(r);
}