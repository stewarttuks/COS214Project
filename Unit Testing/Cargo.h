/**
 * @file Cargo.h
 * @author Runtime Terror
 * @brief Crates of cargo.
 * @version 0.1
 * @date 2021-11-22
 */
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
        int volume;

};

#endif