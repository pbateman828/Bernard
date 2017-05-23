#include <iostream>
#include <string>

#include "toon.h"

using namespace std;

Toon::Toon () {

}

Toon::Toon (string s) {
    name = s;
}

void Toon::say_name () {
    cout << "What is your name?" << endl;
    cout << ">";
    cin >> name;
    cout << "  " << endl;
    cout << "# Your name is " << name << endl;
    cout << "                                       ";
}
