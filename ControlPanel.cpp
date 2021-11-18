#include "ControlPanel.h"

ControlPanel::ControlPanel(Button** b){
    buttons =b;
}
 
ControlPanel::~ControlPanel(){

}

void ControlPanel::press(int b){
    buttons[b]->press();
}