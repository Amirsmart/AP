#include "product.h"
#include <iomanip>
#include "bag.h"

class shop {
public:
    int numberOfProducts;
    product prs[30];
    shop(){
        initProducts();
    }
    void initProducts();
    void printFoodMenu();
    void printMechMenu();
    bag buyMech(bag bg);
    bag buyFood(bag bg);
};
