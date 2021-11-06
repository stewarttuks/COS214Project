#ifndef DRAGON_H
#define DRAGON_H

#include <iostream>
#include <vector>
#include "Cargo.h"
#include "Rocket.h"

using namespace std;

class Dragon : public Rocket
{
    private:
        int numCargoBoxes;
        vector<Cargo*> cargo;

    public:
        Dragon(int, vector<Cargo*>, string, int, RocketState*);
        ~Dragon();

        void getSummary();

        void prepLaunch();
        void testLaunch();
        void launch();

};

#endif