#include <iostream>
#include <string>

#include "level.h"
#include "toon.h"
#include "player.h"
#include "parser.h"
#include "l_init.cpp"

using namespace std;

Player* p_init() {
    string n;
    Player* p;
    cout << "What is your name?" << endl;
    getline(cin,n);
    p = new Player{n};

    return p;
}

int main() {

    bool quit = false;

    Player* p = p_init();
    level* l = l2_init();



    while(!quit) {
        quit = u_input(p, l);
    }
    /*
     * Hey Chris <3
    */

    delete l;
    delete p;

    return 0;
}
