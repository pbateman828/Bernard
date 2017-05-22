#ifndef LEVEL_H
#define LEVEL_H
#include <string>

using namespace std;

class world {

protected:
    string _worldName = "Bernard";
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

private:
    string _userInputArrow = ">";
    string _dashes = "---------------------------------------";
    string _spaces = "                                       ";
    string _whatToDo = "Guest, what do you want to do?";
    string _userIn;
};

#endif
