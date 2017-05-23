#include <iostream>
#include <string>

#include "level.h"
#include "toon.h"
#include "player.h"

using namespace std;

int main() {
    Player kev ("Kevin");
    kev.print_inv();
    kev.say_name();
    kev.add_item("ho");
    kev.print_inv();
    return 0;
}
