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
#include "RocketDirector.h"


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
    bool chosen = false;
    bool CD = false;            // CrewDragon
    bool D = false;             // Dragon
    bool FH = false;            // FalconHeavy
    bool FN = false;            // FalconNine
    string username;
    string password;

    // ---------------------------------------------------------------------- //

    
   
    cout <<"Welcome to SpaceX's Rocket simulation center...Please Log in to access the control panel.\n";

    
    cout<<"===================================================\n";
    while (!loggedIn)
    {
        
        cout<<"Username:\n> ";
        cin>> username;
        cout<<"Password:\n> ";
        cin>> password;
        loggedIn = controlPanel->authorise(username, password);
        if (loggedIn){
            cout<<"Login successful\n";
            cout<<"===================================================\n\n";
        }
        else{
            cout<<"===================================================\n";
            cout<<"***Incorrect credentials, please try again***\n";
            
        }
    }

    Rocket* myRocket;

    while (!chosen)
    {
        int sendOption = -1;
        cout<<"What would you like to send to space?\n 1: Crew/Cargo\t2: Satellites\n> ";
        cin>>sendOption;
        cout<<endl;
        RocketDirector* director = new RocketDirector();

        if (sendOption == 1){    
            int numCrew =0;
            int numCargo =0;              
            chosen = true;
            bool valid = false;

            // while ( || numCargo <0 || numCrew >10 || numCargo >20){
            while (!valid){
                
                cout<< "Haw many crew members are you sending?\n>";
                cin >> numCrew;
                cout<<endl;

                cout<< "Haw many crates of cargo will be on board?\n>";
                cin >> numCargo;
                cout<<endl;

                if (numCrew <0){
                    cout<<"***Please enter a valid numver of crew***\n\n";
                    valid = false;
                }
                else if (numCargo <0){
                    cout<<"***Please enter a valid numver of cargo crates***\n\n";
                    valid = false;
                }
                else if ( numCrew >10){
                    cout<<"***There are only 10 seats avaliable, please select fewwer crew members***\n\n";
                    valid = false;
                }

                else if ( numCargo >20){
                    cout<<"***There is only place for 20 crates, please send fewer cargo crates***\n\n";
                    valid = false;
                }
                else if (numCargo ==0 && numCrew ==0){
                    cout<<"***You need to send something with on the Spacecraft***\n\n";
                    valid = false;
                }
                else{
                    valid = true;
                }

                if (valid){
                    if (numCrew ==0){                       // Dragon
                        D = true;
                        director->build(1);
                        myRocket = director->getRocket();
                    }
                    else{
                        CD = true;
                        director->build(0);                 // CrewDragon
                        myRocket = director->getRocket();
                    }
                    
                }
                    
            }
        }

        else if (sendOption == 2){              
            chosen = true;
            director->build(1);
            myRocket = director->getRocket();
        }

        else{
            cout<< "***Invalid option, please try again.***\n\n";
        }
    }

    
    myRocket->getSummary();

    cout<<endl;
    return 0;
}