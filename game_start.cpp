// "game_start.cpp"

#include <iostream>
#include <string>
#include "game_start.h"

using namespace std;

void start(std::string &name, std::string &avatar) {
    cout << "Please enter your player name." << endl;
    cin >> name;
    cout << "Please choose one avatar from \n1.Knight \n2.Defender\n3.tank\n4.magician" << endl;
    cin >> avatar;
}
