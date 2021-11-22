/**
 * @file RocketState.h
 * @author Runtime Terror
 * @brief The interface for the state of a rocket.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <iostream>
#include "Rocket.h"

#include <unistd.h>

using namespace std;
class Rocket;

class RocketState
{
    public:
       RocketState();
       virtual ~RocketState();

       virtual void handleRequest(Rocket*, string) = 0;
       virtual string getString() =0;

};

#endif