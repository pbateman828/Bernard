#include "level.h"
#include <iostream>
#include <string>


using namespace std;

//if the level doesnt have an intro, default constructor
level::level() {

}

void level::printIntro() {
    cout << _dashes << endl;
    cout << _spaces << endl;
    cout << _intro << endl;
    cout << _spaces << endl;
    cout << _dashes << endl;

}

void level::level1Descript() {
    cout << _levelDescriptWords << endl;
    cout << _spaces <<  endl;
    cout << _level1Env << endl;
    cout << _spaces <<  endl;
}
