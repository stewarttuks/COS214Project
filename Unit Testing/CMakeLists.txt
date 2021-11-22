cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests main.cpp
               Rocket.h Rocket.cpp
               Crew.h Crew.cpp
               Cargo.h Cargo.cpp
               CrewDragon.h CrewDragon.cpp
               Dragon.h Dragon.cpp
               FalconHeavy.h FalconHeavy.cpp
               FalconNine.h FalconNine.cpp
               RocketState.h RocketState.cpp
               TestingState.h TestingState.cpp
               LaunchState.h LaunchState.cpp
               PrepState.h PrepState.cpp
               RocketDirector.h RocketDirector.cpp
               FalconHeavyBuilder.h FalconHeavyBuilder.cpp
               CrewDragonBuilder.h crewDragonBuilder.cpp
               DragonBuilder.h DragonBuilder.cpp
               FalconNineBuilder.h FalconNineBuilder.cpp
               RocketBuilder.h RocketBuilder.cpp
               Satellite.h Satellite.cpp
               InternetSatellite.h InternetSatellite.cpp
               SatelliteFactory.h SatelliteFactory.cpp
               InternetSatelliteFactory.h InternetSatelliteFactory.cpp
               Antenna.h Antenna.cpp
               SatelliteIterator.h SatelliteIterator.cpp
               SatelliteVector.h SatelliteVector.cpp
               RocketStorage.h RocketStorage.cpp
               RocketBackup.h RocketBackup.cpp
               ControlPanel.h ControlPanel.cpp
               ControlPanelProxy.h ControlPanelProxy.cpp
               ControlRoom.h ControlRoom.cpp
               LaunchCommand.h LaunchCommand.cpp
               PrepCommand.h PrepCommand.cpp
               InfoCommand.h InfoCommand.cpp
               Command.h Command.cpp
               Button.h Button.cpp
               UnitTest.cpp)
               
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
