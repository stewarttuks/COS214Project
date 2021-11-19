#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <iostream>
#include "Rocket.h"

#include <unistd.h>

using namespace std;
class Rocket;

class RocketState
{
    private:

    public:
       RocketState();
       virtual ~RocketState();

       virtual void handleRequest(Rocket*, string) = 0;
       virtual string getString() =0;

};

#endif