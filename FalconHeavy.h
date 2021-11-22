/**
 * @file FalconHeavy.h
 * @author Runtime Terror
 * @brief A rocket that holds up to 150 satellites.
 * @version 0.1
 * @date 2021-11-22
 */
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
        string getType();
};

#endif