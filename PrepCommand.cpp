#include "PrepCommand.h"

PrepCommand::PrepCommand(Rocket* r):Command(r){

}

PrepCommand::~PrepCommand(){

}

void PrepCommand::execute(){
    receiver->prepLaunch();
}