#include "Button.h"

Button::Button(Command* c){
    command = c;
}

Button::~Button(){
    delete command;
}

void Button::push(){

}

void Button::operation(Command* c){
    
}