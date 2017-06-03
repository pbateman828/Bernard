#ifndef LEVEL_H
#define LEVEL_H
#include <string>
#include <vector>
using namespace std;

class level {

public:
    level();

    level(string, vector<string>, int);

    void printIntro();

    void levelDescript();

    void printLevelItems();

    vector<string> getLevelItems();

    void delLevelItem(string);

    void addLevelItems(string);

    void printDoorNum();

private:
    int _doors;
    vector<string> _levelItems;
    string _userInputArrow = ">";
    string _dashes = "---------------------------------------";
    string _spaces = "                                       ";
    string _levelDescriptWords = "Level Description";
    string _levelEnv = "Welcome to Westworld.\n";
    string _worldName = "World Name: Bernard";
    string _intro = "Go fucking do whatever you want.\nGood day sir!";
};

#endif
