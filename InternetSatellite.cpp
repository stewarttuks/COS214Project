#include "InternetSatellite.h"

InternetSatellite::InternetSatellite(int i): Satellite(i){

}

InternetSatellite::InternetSatellite(int i, Antenna* a): Satellite(i, a){

}

InternetSatellite::~InternetSatellite(){

}

void InternetSatellite::test(string message){
        cout << message << endl;
}