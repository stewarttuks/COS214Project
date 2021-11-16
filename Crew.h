#ifndef CREW_H
#define CREW_H

#include <iostream>

using namespace std;

class Crew
{

    public:
        Crew();
        Crew(string);
        Crew(const Crew&);
        ~Crew();

        Crew* clone();

        //getter
        string getname();
        void setname(string n);

    private:
        string name;
        string gender;

};

#endif