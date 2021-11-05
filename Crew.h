#ifndef CREW_H
#define CREW_H

#include <iostream>

using namespace std;

class Crew
{
    private:
        string name;

    public:
        Crew();
        Crew(string);
        Crew(const Crew&);
        ~Crew();

        Crew* clone(string);

        //getter
        string getname();
        void setname(string n){name = n;}

};

#endif