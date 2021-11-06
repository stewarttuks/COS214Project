#ifndef FALCONNINEBUILDER_H
#define FALCONNINEBUILDER_H

#include <iostream>
#include "RocketBuilder.h"

using namespace std;

class FalconNineBuilder : public RocketBuilder
{
    private:

    public:
        FalconNineBuilder();
        virtual ~FalconNineBuilder();

        void addParts();
        void addShell();
        void addCores();
        void addMerlinEngine();
        void addVacuumEngine();

};

#endif