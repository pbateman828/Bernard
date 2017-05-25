#include <iostream>
#include <string>

#include "level.h"
#include "toon.h"
#include "player.h"
#include "parser.h"

using namespace std;

level* l_init() {
    string n;
    level* l;
    //cout << "What is your name?" << endl;
    //getline(cin,l);
    l = new level{};
    l->printIntro();
    l->printLevel1Items();
    return l;
}

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
    level* l = l_init();

    while(!quit) {
        quit = u_input(p, l);
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
    
    delete l;
    delete p;

    return 0;
}
