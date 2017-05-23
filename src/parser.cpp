#include "parser.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

void parse (vector<string> vs) { //This is where we will look for keywords
                                 //Need to decide on the command structure
    for (auto& i : vs) {
        cout << i << endl;
    }
}

vector<string> tokenize (string s) {

    vector<string> tokens;
    istringstream iss(s);
    copy(istream_iterator<string>(iss),
            istream_iterator<string>(),
            back_inserter(tokens));
    return tokens;
}

bool u_input () {

    vector<string> tk;
    string com;
    cout << "Tell me what to do. type \'quit\' or \'q\'to quit " << endl;
    getline(cin, com);
    tk = tokenize(com);
    if(tk[0] == "quit" || tk[0] == "q") { //this is how you quit the game
        return true;
    }

    //Need to figure a way to save the game state.
    parse(tk);
    cout << "Thanks for the input! " << endl;
    cout << "\n";
    return false;
}
