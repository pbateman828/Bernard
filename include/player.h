#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

using namespace std;

class Player {
        string name;
        vector<string> inventory;
    public:
        Player();
        Player(string);
        void print_inv();
        void say_name();
        void set_name(string);
        string get_name();
        vector<string> get_inv();
};

#endif
