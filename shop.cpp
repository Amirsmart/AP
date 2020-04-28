#include "shop.h"


void shop::initProducts(){
    prs[0] = product("food" , 3000 , 30000);
    prs[1] = product("cake" , 1000 , 10000);
    prs[2] = product("drink" , 2000 , 20000);
    prs[3] = product("battery" , 0 , 20000);
    prs[4] = product("pin", 0 , 10000);
    prs[5] = product("hammer" , 0 , 50000);
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

bag shop::buyMech(bag bg){
    int no , number, price;
    string name ;
    cin>>no;
    for(int i = 0 ; i < no ; i++){
        cin>>name>>number;
        if(name == "battery"){
            price = prs[3].price;
            price *= number ;
            if(price > bg.money) cout<<"you can not buy these goods.\n";
            else{
                cout<<"the goods added to your bag.\n";
                bg.money -= price ;
                bg.batteries += number ;
            }
        }
        else if (name == "pin"){
            price = prs[4].price;
            price *= number ;
            if(price > bg.money) cout<<"you can not buy these goods.\n";
            else{
                cout<<"the goods added to your bag.\n";
                bg.money -= price ;
                bg.pins += number ;
            }
        }
        else if (name == "hammer"){
            price = prs[5].price;
            price *= number ;
            if(price > bg.money) cout<<"you can not buy these goods.\n";
            else{
                cout<<"the goods added to your bag.\n";
                bg.money -= price ;
                bg.hammers += number ;
            }
        }
        else cout<<"you can not buy these goods.\n";
    }
    return bg;
}

bag shop::buyFood(bag bg){
    int no , number, price , energy;
    string name ;
    cin>>no;
    for(int i = 0 ; i < no ; i++){
        cin>>name>>number;
        if(name == "food"){
            price = prs[0].price;
            energy = prs[0].energy;
            price *= number ;
            energy *= number ;
            if(price > bg.money) cout<<"you can not buy these foods.\n";
            else{
                cout<<"your energy increased for "<< energy <<" joule.\n";
                bg.money -= price ;
                bg.energy += energy;
            }
        }
        else if (name == "cake"){
            price = prs[1].price;
            energy = prs[1].energy;
            price *= number ;
            energy *= number ;
            if(price > bg.money) cout<<"you can not buy these foods.\n";
            else{
                cout<<"your energy increased for "<< energy <<" joule.\n";
                bg.money -= price ;
                bg.energy += energy;
            }
        }
        else if (name == "hammer"){
            price = prs[2].price;
            energy = prs[2].energy;
            price *= number ;
            energy *= number ;
            if(price > bg.money) cout<<"you can not buy these foods.\n";
            else{
                cout<<"your energy increased for "<< energy <<" joule.\n";
                bg.money -= price ;
                bg.energy += energy;
            }
        }
        else cout<<"you can not buy these goods.\n";
    }
    return bg;
}
