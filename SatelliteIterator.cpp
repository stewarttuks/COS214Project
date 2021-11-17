#include "SatelliteIterator.h"

SatelliteIterator::SatelliteIterator(vector<Satellite*> s){

    itList = s;
    currentPos = 0;

}

SatelliteIterator::~SatelliteIterator(){
    // 
}

Satellite* SatelliteIterator::first(){

   return itList.at(0);
}

Satellite* SatelliteIterator::last(){
//  not sure?

}

Satellite* SatelliteIterator::next(){
    if(!isDone()){
        return nullptr;
    }

    return itList.at(++currentPos);
}

Satellite* SatelliteIterator::current(){
    return itList.at(currentPos);
}

bool SatelliteIterator::isDone(){
   // return false;           //delete -> I needed to return something, so that it complies

   return currentPos < itList.size();
}