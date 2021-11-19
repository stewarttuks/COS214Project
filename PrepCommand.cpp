#include "PrepCommand.h"

PrepCommand::PrepCommand():Command(){

}

PrepCommand::~PrepCommand(){

}

void PrepCommand::execute(){
    receiver->activatePrepLaunch();
}