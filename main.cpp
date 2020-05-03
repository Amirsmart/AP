#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
    Game game;
    int cmd = -1  , subcmd = -1;
    while(true){
        cin>>cmd;
        if(cmd == 7) game.bg.printInventory();
        else if(cmd == 6){
            cin>>subcmd;
            if(subcmd == 1) game.ss.printNeeded(game.bg);
            else if (subcmd == 2) game.ss.repair(game.bg);
       }
       else if(cmd == 5){
            cin>>subcmd;
            if(subcmd == 1) game.sh.buyMech(game.bg);
            else if (subcmd == 2) game.sh.buyFood(game.bg);
       }
    }
    return 0;
}
