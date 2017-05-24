#include <iostream>
#include <string>

#include "level.h"
#include "toon.h"

using namespace std;

int main() {

    level level1;

    level1.printIntro();

    level1.level1Descript();

    Toon t2;

    t2.say_name();

    return 0;
}
