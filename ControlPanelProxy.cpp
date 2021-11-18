#include "ControlPanelProxy.h"

ControlPanelProxy::ControlPanelProxy(){

}

ControlPanelProxy::~ControlPanelProxy(){

}

void ControlPanelProxy::protect(ControlPanel* cp){
    controlPanel = cp;
}

bool ControlPanelProxy::authorise(string un, string pass){
    if (username == un && pass == password){
        authorized = true;
    }

    return authorized;;
}

void ControlPanelProxy::press(int b){
    if (authorized)
        controlPanel->press(b);
    else
        cout<<"ERROR: User not authorized\n";
}