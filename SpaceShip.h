#include <iostream>
#include "bag.h"


using namespace std ;

class SpaceShip {
public:
    int  pins , batteries , hammers ;
    SpaceShip(){
        pins = 10 , hammers = 1 , batteries = 1;
    }
    void printNeeded(bag bg);
    void repair(bag bg);
};
