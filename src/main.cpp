#include <iostream>
#include <string>

#include "level.h"
#include "toon.h"

using namespace std;

int main() {
    Toon t1 ("Kevin");
    Toon t2;
    t1.say_name();
    t2.say_name();
    return 0;
}
