#include "RefurbishState.h"

RefurbishState::RefurbishState(){

}

RefurbishState::~RefurbishState(){
    
}


void RefurbishState::handleRequest(Rocket* rocket, string request){
    cout<<"Rocket '"<<rocket->getname()<<"' is being refurbished."<<endl;
}