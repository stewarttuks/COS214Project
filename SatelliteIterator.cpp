/**
 * @file SatelliteIterator.cpp
 * @author Runtime Terror
 * @brief Implementation of SatelliteIterator.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "SatelliteIterator.h"

SatelliteIterator::SatelliteIterator(vector<Satellite*> s){
    itList = s;
    currentPos = 0;

}

SatelliteIterator::~SatelliteIterator(){
    
}

Satellite* SatelliteIterator::first(){
    currentPos = 0;
   return itList.at(0);
}

Satellite* SatelliteIterator::next(){
    if(!hasNext()){
        return nullptr;
    }

    return itList.at(currentPos++);
}

Satellite* SatelliteIterator::current(){

    return itList.at(currentPos);
}

bool SatelliteIterator::hasNext(){
   return currentPos < itList.size();
}
