#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "game_start.h"
#include "printLeaderBoard.h"
#include "boss.h"
#include "process.h"
#include "file_io.h"

using namespace std;

int main() {
    string name = "", avatar = "";
    Statistic player_stat;
    int load, save, boss_stage = 0;
    int add_stat = 1;
    cout << "Load game?" << endl;
    cin >> load;
    
    if (load) {
        in_data(name, avatar, boss_stage);
    } else {
        start(name, avatar);
    }
    
    bool defeated = true;
    while (defeated) {
        Statistic player_stat = {100 * add_stat, 50 * add_stat, 800 * add_stat};
        cout << endl << "Player's statistic: " << endl << "Attack: " << player_stat.attack << 
        "     Defence: " << player_stat.defence << "     HP: " << player_stat.hp << endl << endl;
        process(&player_stat);
        defeated = boss(avatar, boss_stage);
        cout << endl << "Player's statistic: " << endl << "Attack: " << player_stat.attack << 
        "     Defence: " << player_stat.defence << "     HP: " << player_stat.hp << endl << endl;
        add_stat += 1;
    }
    
    print_board();
    cout << "Save game?" << endl;
    cin >> save;
    if (save) {
        out_data(name, avatar, boss_stage);
    }
    return 0;
}
