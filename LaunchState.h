#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H

#include <iostream>
#include "RocketState.h"

using namespace std;

class LaunchState : public RocketState{
    private:

    public:
        LaunchState();
        ~LaunchState();

        void handleRequest(Rocket*, string);

};

#endif