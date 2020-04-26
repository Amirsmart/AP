#include <iostream>
using namespace std;


class product {
public:
    int energy , price;
    string name;
    product(){};
    product(string n , int en , int pr){
        name = n , energy = en , price = pr ;
    }
};
