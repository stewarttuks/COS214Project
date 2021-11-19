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
        string getString();

        void handleRequest(Rocket*, string);

};

#endif