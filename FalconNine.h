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