/**
 * @file Dragon.h
 * @author Runtime Terror
 * @brief A rocket that holds 0 crew and up to 20 cargo crates.
 * @version 0.1
 * @date 2021-11-22
 */
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