#include <iostream>
#include <string>

#include "toon.h"

using namespace std;

Toon::Toon () {
    name = "...I have no name...";
}

Toon::Toon (string s) {
    name = s;
}

void Toon::say_name () {
    cout << "My name is " << name << endl;
}
