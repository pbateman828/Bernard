#include <iostream>
#include <string>

#include "level.h"
#include "toon.h"
#include "player.h"
#include "parser.h"

using namespace std;

int main() {

    Player p("Fuck Stick");
    p.say_name();

    p.print_inv();

    p.add_item("Poop turd");

    p.print_inv();

    p.del_item("nuts");
    
    p.print_inv();



    bool quit = false;

    while(!quit) {
        quit = u_input();
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
