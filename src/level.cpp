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
    cout << _spaces << endl;
    cout << _levelDescriptWords << endl;
    cout << _spaces <<  endl;
    cout << _level1Env << endl;
    cout << _spaces <<  endl;
}

vector<string> level::getLevel1Items() {
    return level1Items;
}

void level::printLevel1Items () {
    cout << "---------" << endl;
    cout << "Level Inventory" << endl;
    for (auto& i : level1Items) {
        cout << i << endl;
    }
    cout << "---------" << endl;
}

void level::delLevel1Item(string item) {
    for (size_t i = 0; i < level1Items.size(); i++) {
        if(level1Items[i] == item) {
            level1Items.erase(level1Items.begin() + i);
            break;
        }
        if(i == level1Items.size() - 1) {
            cout << "Item not in inventory.";
        }
    }
}
