#include "parser.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

enum act{
    inv,
    go,
    look,
    take,
    drop,
    use
};

act hash_it (std::string const& ss) {
    if(ss == "inventory") return inv;
    if(ss == "go") return go;
    if(ss == "look") return look;
    if(ss == "take") return take;
    if(ss == "drop") return drop;
    if(ss == "use") return use;
}

void parse (vector<string> vs) { 
    //This is where we will look for keywords
    ////Need to decide on the command structure
    switch (hash_it(vs[0])) {
        case inv:
            cout << "Print inventory" << endl;
        default:
            cout << "I don't understand" << endl;
    }
/*
    for (auto& i : vs) {
        cout << i << endl;
    }
*/
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
    if(tk[0] == "quit" || tk[0] == "q") { 
        return true;
    }
    //This is how you quit the game
    //This is pretty ugly, will revisit after sleep

    //Need to figure a way to save the game state.
    parse(tk);
    cout << "Thanks for the input! " << endl;
    cout << "\n";
    return false;
}
