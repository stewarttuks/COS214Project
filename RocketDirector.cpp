#include "RocketDirector.h"

RocketDirector::RocketDirector(){
    builders = new RocketBuilder*[4];
    builders[0] = new CrewDragonBuilder();
    builders[1] = new DragonBuilder();
    builders[2] = new FalconHeavyBuilder();
    builders[3] = new FalconNineBuilder();
}

RocketDirector::~RocketDirector(){

}

void RocketDirector::build(int r){
    if (r <= 3)
    {
        builders[r]->addParts();
        built = builders[r]->returnRocket();
    }
}

Rocket* RocketDirector::getRocket(){
    return built;
}