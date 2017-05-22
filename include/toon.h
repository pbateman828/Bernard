#ifndef TOON_H
#define TOON_H
#include <iostream>
#include <string>
using namespace std;

class Toon {
        string name;
    public:
        Toon(); //Default constructor
        Toon(string);
        void say_name();
};
#endif
