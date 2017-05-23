#include <string>
#include <iostream>

#include "player.h"

using namespace std;

Player::Player () {
    inventory = { "deez" , "nuts" };
    name = "...I have no name...";
}

Player::Player (string s) {
    name = s;
    inventory = { "deez" , "nuts" };
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

