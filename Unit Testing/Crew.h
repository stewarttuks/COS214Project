/**
 * @file Crew.h
 * @author Runtime Terror
 * @brief A crew member.
 * @version 0.1
 * @date 2021-11-22
 */
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
        string getgender();

    private:
        string gender;

};

#endif