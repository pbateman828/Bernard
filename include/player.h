#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "toon.h"

using namespace std;

class Player: public Toon {
        vector<string> inventory;
    public:
        Player();
        Player(string);
        void print_inv();

}

#endif
