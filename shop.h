#include "product.h"
#include <iomanip>


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
};
