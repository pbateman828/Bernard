#ifndef LEVEL_H
#define LEVEL_H
#include <string>
#include "boost/algorithm/string.hpp"

using namespace std;

class world {

protected:
    string _worldName = "World Name: Bernard";
    string _intro = "Go fucking do whatever you want.\nGood day sir!";
};

class level: public world {

public:
    level();
    // level(string insertIntro);

    void printIntro();

    void userQuestion();

    void printWorldName();

    string userInput();

    void level1Descript();

private:
    string _userInputArrow = ">";
    string _dashes = "---------------------------------------";
    string _spaces = "                                       ";
    string _whatToDo = "What do you want to do?";
    string _userIn;
    string _levelDescriptWords = "Level Description";
    string _level1Env = "The bandit had been throwing them away. Well, because he thought it was good sport.\n Because some men aren't looking for anything logical, like money.\n They can't be bought, bullied, reasoned, or negotiated with.\n Some men just want to watch the world burn. ";
    string _helpUser = "help ";
};

#endif
