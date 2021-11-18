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

void Button::operation(Command* c){
    
}