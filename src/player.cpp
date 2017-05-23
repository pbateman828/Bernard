#include "player.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Player::Player () {
    add_item("deez");
    add_item("nuts");
    set_name("...I have no name...");
}

Player::Player (string s) {
    set_name(s);
    add_item("deez");
    add_item("nuts");
}

void Player::say_name () {
    cout << "My name is " << name << endl;
}

void Player::print_inv () {
    for (auto& i : inventory) {
        cout << i << endl;
    }
}

void Player::set_name (string s) {
    name = s;
}

string Player::get_name () {
    return name;
}

vector<string> Player::get_inv () {
    return inventory;
}

void Player::add_item (string item) {
    inventory.push_back(item);
}
