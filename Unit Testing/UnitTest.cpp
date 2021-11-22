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
#include "InternetAntenna.h"
#include "RocketStorage.h"
#include <vector>

#include "gtest/gtest.h"
namespace{

    ControlRoom* Initialize(){
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

        return controlPanel;
    }

    TEST(authorise, RightPasswordRightUserName)
    {
        ControlRoom* cPannel = Initialize();
        EXPECT_EQ(true, cPannel->authorise("admin", "admin"));
    }

    TEST(authorise, RightPasswordWrongUserName)
    {
        ControlRoom* cPannel = Initialize();
        EXPECT_EQ(false, cPannel->authorise("admin", "1234"));
    }

    TEST(authorise, WrongPasswordRightUserName)
    {
        ControlRoom* cPannel = Initialize();
        EXPECT_EQ(false, cPannel->authorise("456", "admin"));
    }

    TEST(authorise, WrongPasswordWrongUserName)
    {
        ControlRoom* cPannel = Initialize();
        EXPECT_EQ(false, cPannel->authorise("456", "fghjf"));
    }

    TEST(getGender, Male)
    {
        Crew* maleCrew = new Crew("Male"); 
        EXPECT_EQ("Male", maleCrew->getgender());
    }

    TEST(getGender, Female)
    {
        Crew* FemaleCrew = new Crew("Female"); 
        EXPECT_EQ("Female", FemaleCrew->getgender());
    }

    TEST(getGender, WrongGender)
    {
        Crew* UndefinedCrew = new Crew("abcde"); 
        try {
            UndefinedCrew->getgender();
            FAIL();
        } catch (std::invalid_argument & err) {
            EXPECT_EQ(err.what(),std::string("Invalid Gender"));
        } catch(...) {
            FAIL();
        }
    }

    TEST(getname, CorrectName)
    {
        RocketDirector* director = new RocketDirector();
        Rocket* myRocket;

        director->build(1);
        myRocket = director->getRocket();
        myRocket->setName("Dragon-6783");
        
        EXPECT_EQ("Dragon-6783", myRocket->getname());
    }

    TEST(getname, RightName)
    {
        RocketDirector* director = new RocketDirector();
        Rocket* myRocket;

        director->build(1);
        myRocket = director->getRocket();
        myRocket->setName("Dragon-9075");
        myRocket->setName("Dragon-8905");
        
        EXPECT_EQ("Dragon-8905", myRocket->getname());
    }

    TEST(getString, CorrectState)
    {
        LaunchState* state = new LaunchState();
        
        EXPECT_EQ("Ready for launch", state->getString());
    }

    TEST(getId, CorrectID)
    {
        RocketDirector* director = new RocketDirector();
        Rocket* myRocket;
        director->build(3);
        myRocket = director->getRocket();
     
        SatelliteFactory* internetSatelliteFactory = new InternetSatelliteFactory();
        vector<Satellite*> sat = internetSatelliteFactory->createSatellites(60);
        myRocket->loadSatellites(sat);
        sat.at(5)->setid(679);
        
        EXPECT_EQ(679, sat.at(5)->getid());
    }


    

}