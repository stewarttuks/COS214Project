#include "InfoCommand.h"

InfoCommand::InfoCommand():Command(){

}

InfoCommand::~InfoCommand(){

}

void InfoCommand::execute(){
    receiver->getSummary();
}