#ifndef CARGO_H
#define CARGO_H

#include <iostream>

using namespace std;

class Cargo
{
    private:
        string description;

    public:
        Cargo(string);
        Cargo(const Cargo&);
        ~Cargo();

        Cargo* clone(string);

        //getter
        string getdescription();

};

#endif