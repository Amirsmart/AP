#include <iostream>
#include "shop.h"
using namespace std;

int main()
{
    shop shp;
    shp.bg.printInventory();
    shp.buyFood();
    shp.buyMech();
    shp.bg.printInventory();
    return 0;
}
