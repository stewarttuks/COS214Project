#include "ControlPanelProxy.h"

ControlPanelProxy::ControlPanelProxy(){

}

ControlPanelProxy::~ControlPanelProxy(){

}

void ControlPanelProxy::protect(ControlPanel* cp){
    controlPanel = cp;
}