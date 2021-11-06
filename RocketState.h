#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <iostream>
#include "Rocket.h"

using namespace std;
class Rocket;

class RocketState
{
    private:

    public:
       RocketState();
       virtual ~RocketState();

       virtual void handleRequest(Rocket*, string) = 0;

};

#endif