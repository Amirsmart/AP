#include <iomanip>
#include <iostream>
#include "SpaceShip.h"
#include "shop.h"

using namespace std ;

class Game {
public:
        bag bg ;
        shop sh ;
        SpaceShip ss ;
        Game(){
        }
        void buyMech(){
            bg = sh.buyMech(bg);
        }
        void buyFood(){
            bg = sh.buyFood(bg);
        }
        void shipNeeded(){
            ss.printNeeded(bg);
        }
        void shipRepair(){
            ss.repair(bg);
        }
};
