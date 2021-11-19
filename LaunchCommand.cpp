#include "LaunchCommand.h"

LaunchCommand::LaunchCommand():Command(){

}

LaunchCommand::~LaunchCommand(){

}

void LaunchCommand::execute(){
    receiver->activateLaunch();
}