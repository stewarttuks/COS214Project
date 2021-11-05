#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>

using namespace std;

class Rocket
{
    private:
        string name;
        int fuel;

    public:
        Rocket();
        ~Rocket();

        void launch();

};

#endif