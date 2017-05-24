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
    cout << "---------" << endl;
    cout << "Inventory" << endl;
    for (auto& i : inv) {
        cout << i << endl;
    }
    cout << "---------" << endl;
}

void Player::set_name (string s) {
    name = s;
}

string Player::get_name () {
    return name;
}

vector<string> Player::get_inv () {
    return inv;
}

void Player::add_item (string item) {
    inv.push_back(item);
}

void Player::del_item (string item) {
    for (size_t i = 0; i < inv.size(); i++) {
        if(inv[i] == item) {
            inv.erase(inv.begin() + i);
            break;
        }
        if(i == inv.size() - 1) {
            cout << "Item not in inventory.";
        }
    }
}
