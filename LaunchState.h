#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H

#include <iostream>
#include <string>
#include "RocketState.h"

using namespace std;

class LaunchState : public RocketState{
    private:

    public:
        LaunchState();
        virtual ~LaunchState();
        string getString();

        void handleRequest(Rocket*, string);

};

#endif