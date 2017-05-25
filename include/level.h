#ifndef LEVEL_H
#define LEVEL_H
#include <string>
#include <vector>

using namespace std;

class level {

public:
    level();

    // level(string, vector<string>, int);

    void printIntro();

    void level1Descript();

    void printLevel1Items();

    vector<string> getLevel1Items();

    void delLevel1Item(string);

private:
    vector<string> level1Items = {"clothes", "weapons", "hat"};
    string _userInputArrow = ">";
    string _dashes = "---------------------------------------";
    string _spaces = "                                       ";
    string _levelDescriptWords = "Level Description";
    string _level1Env = "Welcome to Westworld.\n";
    string _worldName = "World Name: Bernard";
    string _intro = "Go fucking do whatever you want.\nGood day sir!";
};

#endif
