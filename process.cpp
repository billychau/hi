// "process.cpp"

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "process.h"

using namespace std;

int process(Statistic *stat) {
    srand(time(0));
    int random1, random2, ans, player_ans;
    cout << "Answer the questions correctly to increase the strength of your avatar" << endl;
    for (int i = 0; i < 4; i++) {   
        random1 = rand() % 100;
        random2 = rand() % 100;
        ans = random1 + random2;
        cout << endl << "Q" << i + 1 << ". " << random1 << " + " << random2 << " = ";
        cin >> player_ans;
        if (player_ans == ans){
            cout << "Correct! Your avatar become stronger!" << endl;
            stat -> attack += 10;
            stat -> defence += 5;
            stat -> hp += 100;
        } else {
            cout << "Wrong >_<" << endl;
        }
    }
    return 0;
}
