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

void level::printWorldName() {
    cout << _spaces <<  endl;
    cout << _worldName <<  endl;
    cout << _spaces <<  endl;
}

void level::userQuestion() {
    cout << _spaces <<  endl;
    cout << _whatToDo <<  endl;
    cout << _spaces <<  endl;
}

string level::userInput() {
     cout << _userInputArrow;
     cin >> _userIn;
     bool b = false;
     string noHelp = "There is no help. Fuck ya self!";
     if (b != boost::algorithm::contains(_userIn, _helpUser)) {
         return _userIn;
     }
     else {
         return noHelp;
     }
}

void level::level1Descript() {
    cout << _levelDescriptWords << endl;
    cout << _spaces <<  endl;
    cout << _level1Env << endl;
    cout << _spaces <<  endl;
}
