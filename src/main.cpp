#include <iostream>
#include <string>


#include "toon.h"
#include "player.h"
#include "parser.h"

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

    while(!quit) {
        quit = u_input(p);
    }
    /*
    Player kev ("Kevin");
    kev.print_inv();
    kev.say_name();
    kev.add_item("ho");
    kev.print_inv();
    kev.del_item("nuts");
    kev.print_inv();
    */
    return 0;
}
