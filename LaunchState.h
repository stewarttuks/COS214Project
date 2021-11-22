/**
 * @file LaunchState.h
 * @author Runtime Terror
 * @brief The state where a rocket is ready to launch.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H

#include <iostream>
#include <string>
#include "RocketState.h"

using namespace std;

class LaunchState : public RocketState{
    public:
        LaunchState();
        virtual ~LaunchState();
        string getString();

        void handleRequest(Rocket*, string);
};

#endif