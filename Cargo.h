#ifndef CARGO_H
#define CARGO_H

#include <iostream>

using namespace std;

class Cargo
{
    public:
        Cargo(int);
        Cargo(const Cargo&);
        ~Cargo();

        Cargo* clone();

        //getter + setters
        string getDescription();
        void setDescription(string);


    private:
        string description;
        int weight;

};

#endif