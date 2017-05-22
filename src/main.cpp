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
    
    level level1;

    level1.printWorldName();

    level1.printIntro();

    level1.userQuestion();


    cout << level1.userInput() << endl;
    //level insertLevel1("Don't just stand there, do something! Help. Police, Murder.");
    //insertLevel1.printIntro();

    return 0;
}
