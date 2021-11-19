#ifndef DRAGON_H
#define DRAGON_H

#include "Rocket.h"

using namespace std;

class Dragon : public Rocket
{
    

    public:
        Dragon();
        ~Dragon();

        void getSummary();

        void prepLaunch();
        void launch();
        string getType();
};

#endif