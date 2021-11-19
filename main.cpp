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
#include "InternetSatelliteFactory.h"
#include "PrepState.h"
#include "LaunchState.h"


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

    Crew* maleCrewPrototype = new Crew("Male");
    Crew* femaleCrewPrototype = new Crew("Female");

    Crew** crewPrototypes = new Crew*[2];
    crewPrototypes[0] = maleCrewPrototype;
    crewPrototypes[1] = femaleCrewPrototype;

    Cargo* cargoPrototype = new Cargo (500);

    SatelliteFactory* internetSatelliteFactory = new InternetSatelliteFactory();

    // ---------------------------------------------------------------------- //

    
   
    cout <<"Welcome to SpaceX's Rocket simulation center...Please Log in to access the control panel.\n";

    
    cout<<"===================================================\n";
    loggedIn = controlPanel->authorise("admin", "admin");
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
            }

                
            if (numCrew ==0){                       // Dragon
                D = true;
                director->build(1);
                myRocket = director->getRocket();
                for (int i=0; i< numCargo; i++){
                    string description;
                    Cargo* box = cargoPrototype->clone();
                    cout << "Enter description of Cargo Crate " << i+1 << "\n> ";
                    cin >>description;
                    box->setDescription(description);
                    myRocket->loadCargo(box);
                    cout<< endl;
                }
            }
            else{
                CD = true;
                director->build(0);                 // CrewDragon
                myRocket = director->getRocket();
                
                for (int i=0; i< numCargo; i++){
                    string description;
                    Cargo* box = cargoPrototype->clone();
                    cout << "\nEnter description of Cargo Crate " << i+1 << "\n> ";
                    cin >>description;
                    box->setDescription(description);
                    myRocket->loadCargo(box);
                }
                for (int i=0; i< numCrew; i++){
                    int gender = 0;
                    while (gender <1 || gender > 2){
                        cout << "\nWhat is the gender of Crew Member " << i+1 << "?\n1: Male  \t2:Female\n> ";
                        cin>>gender;
                        if (gender <3 || gender >=1)
                        {
                            string name;
                            myRocket->loadCrew(crewPrototypes[gender-1]->clone());
                        }
                    }   
                }
            }
        }

        else if (sendOption == 2){              
            chosen = true;
            bool valid = false;
            int numSatellites ;

            while (!valid){
                cout << "How many Satellites do you want to send to space?\n> ";
                cin >>numSatellites;

                if (numSatellites<=0 )
                {
                    cout<<"\n***Please enter a valid number of Satellites***\n\n";
                    valid = false;
                }
                else if (numSatellites > 150 )
                {
                    cout<<"\n***We can only send a maximum of 150 Satellites***\n\n";
                    valid = false;
                }
                else{
                    valid = true;
                }
            }

            cout <<endl;

            if (numSatellites <=60){
                FN = true;
                director->build(3);
                myRocket = director->getRocket();
                
            }
            else{
                FH = true;
                director->build(2);
                myRocket = director->getRocket();
            }

            myRocket->loadSatellites(internetSatelliteFactory->createSatellites(numSatellites));

        }

        else{
            cout<< "***Invalid option, please try again.***\n\n";
        }
    }

    //////////// myRocket has been created ////////////

    protectedPanel->setReceiver(myRocket);
    bool done = false;
    bool testing = false;
    int choice;
    myRocket->setState(new PrepState());

    cout<<"\n===================================================\n\n";
    cout<<"Your Rocket is now on the lauch pad. Here is your Control Panel:\n";
    
    while (!done){
            cout <<"\n*********************************************************************\n";
            cout <<"Rocket Name: "<< myRocket->getname() <<"\n";
            cout <<"Rocket State: "<< myRocket->getStateString() <<"\n";
            cout << "1: Prepare Rocket\t2:Launch Rocket\t\t3:Get Rocket Info";
            if (myRocket->getStateString() == "Testing")
                cout<<"\t4:Exit Testing";
            cout<<"\n> ";
            cin >> choice;
        
        if (choice >0 && choice < 4){
            cout <<"*********************************************************************\n\n";
            controlPanel->press(choice-1);
            
            if (choice == 1)
                testing = true;
        }
        else if (choice == 4 && myRocket->getStateString() == "Testing"){
            
            myRocket->setState(new LaunchState());
        }
        else{
            cout<<"***Please press a valid button.***\n";
        }
    }
    
    

    cout<<endl;
    return 0;
}