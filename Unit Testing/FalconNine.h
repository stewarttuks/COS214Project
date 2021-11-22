/**
 * @file FalconNine.h
 * @author Runtime Terror
 * @brief A rocket that holds up to 60 Satellites.
 * @version 0.1
 * @date 2021-11-22
 */
#ifndef FALCONNINE_H
#define FALCONNINE_H

#include "Rocket.h"


using namespace std;

class FalconNine : public Rocket
{
    public:
        FalconNine();
        ~FalconNine();

        void getSummary();

        void prepLaunch();
        void launch();
        string getType();
};

#endif