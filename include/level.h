#ifndef LEVEL_H
#define LEVEL_H
#include <string>

using namespace std;

class level {

public:
    level();

    void printIntro();

    void level1Descript();

private:

    string _userInputArrow = ">";
    string _dashes = "---------------------------------------";
    string _spaces = "                                       ";
    string _levelDescriptWords = "Level Description";
    string _level1Env = "The bandit had been throwing them away. Well, because he thought it was good sport.\n Because some men aren't looking for anything logical, like money.\n They can't be bought, bullied, reasoned, or negotiated with.\n Some men just want to watch the world burn. ";
    string _worldName = "World Name: Bernard";
    string _intro = "Go fucking do whatever you want.\nGood day sir!";
};

#endif
