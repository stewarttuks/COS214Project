/**
 * @file TestingState.h
 * @author Runtime Terror
 * @brief The state where a rocket only performs test launches.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef TESTINGSTATE_H
#define TESTINGSTATE_H

#include <iostream>
#include <string>
#include "RocketState.h"

using namespace std;

class TestingState : public RocketState
{
    public:
        TestingState();
        virtual ~TestingState();
        string getString();

        void handleRequest(Rocket*, string);

};

#endif