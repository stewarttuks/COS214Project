#ifndef PrepState_H
#define PrepState_H

#include <iostream>
#include <string>
#include "RocketState.h"

using namespace std;

class PrepState : public RocketState
{
    private:

    public:
        PrepState();
        virtual ~PrepState();

        void handleRequest(Rocket*, string);
        string getString();

};

#endif