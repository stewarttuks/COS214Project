#ifndef TESTINGSTATE_H
#define TESTINGSTATE_H

#include <iostream>
#include <string>
#include "RocketState.h"

using namespace std;

class TestingState : public RocketState
{
    private:

    public:
        TestingState();
        virtual ~TestingState();

        void handleRequest(Rocket*, string);

};

#endif