#include <iostream>
#include <string>

#include "level.h"
#include "toon.h"
#include "player.h"
#include "parser.h"

using namespace std;

int main() {
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
