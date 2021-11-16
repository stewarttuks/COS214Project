#include "InternetSatellite.h"

InternetSatellite::InternetSatellite(int i): Satellite(i){

}

InternetSatellite::~InternetSatellite(){

}

void InternetSatellite::test(string message){
        cout << message << endl;
}