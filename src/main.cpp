#include <iostream>
#include <string>

#include "level.h"
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

    Player p("Fuck Stick");
    p.say_name();

    p.print_inv();

    p.add_item("Poop turd");

    p.print_inv();

    p.del_item("nuts");
    
    p.print_inv();



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
