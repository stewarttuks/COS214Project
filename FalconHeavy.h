#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include "Rocket.h"


using namespace std;

class FalconHeavy : public Rocket
{
    public:
        FalconHeavy();
        ~FalconHeavy();

        void prepLaunch();
        void launch();

        void getSummary();
};

#endif