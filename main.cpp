#include <iostream>
#include <vector>
#include <thread>

#include <unistd.h>

#include "Crew.h"
#include "Cargo.h"
#include "InternetSatellite.h"
#include "InternetSatelliteFactory.h"
#include "CrewDragon.h"
#include "Dragon.h"
#include "FalconHeavy.h"
#include "FalconNine.h"
#include "ControlPanelProxy.h"
#include "ControlPanel.h"
#include "PrepCommand.h"
#include "LaunchCommand.h"
#include "InfoCommand.h"


using namespace std;

int main(){ 

    cout<<"===================================================\n          COS214 Project - Runtime Terror\n===================================================\n\n\n";

    // ---------------- Objects setup / variable declaration ---------------- //
    // controlroom->setReciever(r);
    Button** buttons = new Button*[3];

    Command* prepCommand = new PrepCommand();
    Command* launchCommand = new LaunchCommand();
    Command* infoCommand = new InfoCommand();

    buttons[0] = new Button(prepCommand);               // prep
    buttons[1] = new Button(launchCommand);             // launch
    buttons[2] = new Button(infoCommand);               // info

    ControlRoom* protectedPanel = new ControlPanel(buttons);

    ControlRoom* controlPanel = new ControlPanelProxy();
    controlPanel->protect(protectedPanel);

    bool loggedIn = false;
    string username;
    string password;

    // ---------------------------------------------------------------------- //

    

    cout <<"Welcome to SpaceX's Rocket simulation center...Please Log in to access the control panel.\n>";

    

    while (!loggedIn)
    {

        loggedIn = controlPanel->authorise(username, password);
    }

    // while ()


    cout<<endl;
    return 0;
}