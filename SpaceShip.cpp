#include "SpaceShip.h"


void SpaceShip::printNeeded(bag bg){
    cout<<"you need this things:\n";
    cout<<"pin: "<<pins-bg.pins<<endl ;
    cout<<"hammer: "<<hammers-bg.hammers<<endl;
    cout<<"battery: "<<batteries-bg.batteries<<endl;
}

void SpaceShip::repair(bag bg){
    if(bg.pins < pins || bg.hammers < hammers || bg.batteries < batteries){
        cout<<"you can not fix the UFO because you don't have enough things.\n";
    }
    else{
        cout<<"you fixed the UFO.\nreturn to Andromeda.\nyou won the game.\nwinner winner chicken dinner.";
    }
}
