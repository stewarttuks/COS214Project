#include "Command.h"

Command::Command(Rocket* rocket){
    receiver = rocket;
}

void Command::setRocket(Rocket* rocket){
    receiver = rocket;
}

Command::~Command(){

}
