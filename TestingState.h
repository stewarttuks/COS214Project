#ifndef TESTINGSTATE_H
#define TESTINGSTATE_H

#include <iostream>
#include "RocketState.h"

using namespace std;

class TestingState : public RocketState
{
    private:

    public:
        TestingState();
        ~TestingState();

        void handleRequest(Rocket*, string);

};

#endif