#ifndef REFURBISHSTATE_H
#define REFURBISHSTATE_H

#include <iostream>
#include "RocketState.h"

using namespace std;

class RefurbishState : public RocketState
{
    private:

    public:
        RefurbishState();
        virtual ~RefurbishState();

        void handleRequest(Rocket*, string);

};

#endif