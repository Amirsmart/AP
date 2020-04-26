#include "shop.h"


void shop::initProducts(){
    prs[0] = product("food" , 12 , 23);
    prs[1] = product("cake" , 7 , 15);
    prs[2] = product("drink" , 3 , 6);
    prs[3] = product("battery" , 0 , 20);
    prs[4] = product("pin", 0 , 30);
    prs[5] = product("hammer" , 0 , 200);
    numberOfProducts = 6 ;
}

void shop::printFoodMenu(){
    for(int i = 0 ; i < 3 ; i++)
    cout<<i+1<<"- "<<left<<setw(8)<<prs[i].name<<setw(3)<<" | ",
    cout<<setw(4)<<prs[i].energy<<'J'<<setw(3)<<" | " <<setw(4)<< prs[i].price<<"$"<<endl;
}

void shop::printMechMenu(){
    for(int i = 3 ; i < 6 ; i++)
    cout<<(i-2) <<"- "<<left<<setw(8)<<prs[i].name<<setw(3)<<" | ",
    cout<<setw(4)<<prs[i].energy<<'J'<<setw(3)<<" | " <<setw(4)<< prs[i].price<<"$"<<endl;
}
