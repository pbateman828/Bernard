#include "level.h"
#include <iostream>
#include <string>


using namespace std;

//if the level doesnt have an intro, default constructor
level::level() {

}

level::level(string intro, vector<string> items, int doors){
    _doors = doors;
    _levelItems = items;
    _doors = doors;
}

void level::levelDescript() {
    cout << _spaces << endl;
    cout << _levelEnv << endl;
    cout << _spaces <<  endl;
    cout << _intro << endl;
    cout << _spaces <<  endl;
}

vector<string> level::getLevelItems() {
    return _levelItems;
}

void level::printLevelItems () {
    cout << "---------" << endl;
    cout << "Level Inventory" << endl;
    for (auto& i : _levelItems) {
        cout << i << endl;
    }
    cout << "---------" << endl;
}

void level::delLevelItem(string item) {
    for (size_t i = 0; i < _levelItems.size(); i++) {
        if(_levelItems[i] == item) {
            _levelItems.erase(_levelItems.begin() + i);
            break;
        }
        if(i == _levelItems.size() - 1) {
            cout << "Item not in inventory.";
        }
    }
}

void level::addLevelItems(string item) {
    _levelItems.push_back(item);
}

void level::printDoorNum(){
    cout << _spaces << endl;
    cout << "Number of doors" << endl;
    cout << _doors << endl;
}
