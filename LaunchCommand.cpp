#include "LaunchCommand.h"

LaunchCommand::LaunchCommand(Rocket* r):Command(r){

}

LaunchCommand::~LaunchCommand(){

}

void LaunchCommand::execute(){
    receiver->launch();
}