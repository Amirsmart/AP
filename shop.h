#include "product.h"
#include "bag.h"
#include <iomanip>


class shop {
public:
    bag bg;
    int numberOfProducts;
    product prs[30];
    shop(){
        initProducts();
    }
    void initProducts();
    void printFoodMenu();
    void printMechMenu();
    void buyMech();
    void buyFood();
};
