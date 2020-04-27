#include <iomanip>
#include <iostream>
using namespace std ;

class bag {
public:
    int energy , pins , batteries , hammers , money ;
    bag(){
        energy = 20 , pins = 0 , batteries = 0 , hammers = 0 , money = 1000 ;
    }
    void initProducts();
    void printInventory();
    void printMechMenu();
};
