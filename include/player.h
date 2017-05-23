#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Player {
        string name;
        vector<string> inventory;
    public:
        Player();
        Player(string);
        void print_inv();
        void set_name(string);
        void say_name();
        string get_name();
        vector<string> get_inv();
        void add_item(string);
};

#endif
