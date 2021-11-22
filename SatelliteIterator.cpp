/**
 * @file SatelliteIterator.cpp
 * @author Runtime Terror
 * @brief Implementation of SatelliteIterator.h
 * @version 0.1
 * @date 2021-11-22
 */
#include "SatelliteIterator.h"
 
/**
 * Constructor
 * @author Runtime Terror
 * @param[in] s  a vector of satellite objects
 */
SatelliteIterator::SatelliteIterator(vector<Satellite*> s){
    itList = s;
    currentPos = 0;
 
}
 
/**
 * Destructor
 * @author Runtime Terror
 */
SatelliteIterator::~SatelliteIterator(){
   
}
 
/**
 * Returns the first element of the vector
 * @author Runtime Terror
 * @return Satellite*  first element in the vector
 */
Satellite* SatelliteIterator::first(){
    currentPos = 0;
   return itList.at(0);
}
 
/**
 * returns the next element in the vector
 * @author Runtime Terror
 * @return Satellite*  Element in the vector after the current position
 */
Satellite* SatelliteIterator::next(){
    if(!hasNext()){
        return nullptr;
    }
 
    return itList.at(currentPos++);
}
 
/**
 * Returns the satillite in the current position
 * @author Runtime Terror
 * @return Satellite*  Satillite at the current position
 */
Satellite* SatelliteIterator::current(){
 
    return itList.at(currentPos);
}
 
/**
 * Returns a bool representing if a next element exists
 * @author Runtime Terror
 * @return bool  True if there is a next element else false
 */
bool SatelliteIterator::hasNext(){
   return currentPos < itList.size();
}
 

