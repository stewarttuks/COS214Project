#include "Command.h"

Command::Command(){
    receiver = nullptr;
}

void Command::setRocket(Rocket* rocket){
    receiver = rocket;
}

Command::~Command(){

}
