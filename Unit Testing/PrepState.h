/**
 * @file PrepState.h
 * @author Runtime Terror
 * @brief The state where a rocket first has to be prepared for launch.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef PrepState_H
#define PrepState_H

#include <iostream>
#include <string>
#include "RocketState.h"

using namespace std;

class PrepState : public RocketState
{
    public:
        PrepState();
        virtual ~PrepState();

        void handleRequest(Rocket*, string);
        string getString();

};

#endif