#include "parser.h"
#include "player.h"
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
    use,
    op
};

act hash_it (std::string const& ss) {
    if(ss == "inventory") {return inv;}
    if(ss == "go") {return go;}
    if(ss == "look") {return look;}
    if(ss == "take") {return take;}
    if(ss == "drop") {return drop;}
    if(ss == "use") {return use;}
    if(ss == "open") {return op;}
}

void parse (vector<string> vs, Player* p, level *l) {
    string spaces = "                                       ";
    //This is where we will look for keywords
    ////Need to decide on the command structure
    act iv = hash_it(vs[0]);
    switch (iv) {
        case op:
            cout << "Opening something" << endl;
            break;
        case inv:
            cout << spaces << endl;
            cout << "Print inventory" << endl;
            p->print_inv();
            l->printLevelItems();
            break;
        case go:
            cout << spaces << endl;
            cout << "Go somewhere" << endl;
            break;
        case look:
            cout << spaces << endl;
            cout << "Look around" << endl;
            l->printDoorNum(); //Can always move this or delete. 
            break;
        case take:
            cout << spaces << endl;
            cout << "Take something" << endl;
            p->add_item(vs[1]);
            l->delLevelItem(vs[1]);
            break;
        case drop:
            cout << spaces << endl;
            cout << "Drop item" << endl;
            p->del_item(vs[1]);
            l->addLevelItems(vs[1]);
            break;
        case use:
            cout << spaces << endl;
            cout << "Use item on something" << endl;
            break;
        default:
            cout << spaces << endl;
            cout << "I don't understand" << endl;
            break;
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

bool u_input (Player* p, level *l) {
    string dashes = "---------------------------------------";
    string spaces = "                                       ";
    vector<string> tk;
    string com;
    cout << spaces << endl;
    cout << dashes << endl;
    cout << "Tell me what to do. type \'quit\' or \'q\' to quit " << endl;
    cout << ">";
    getline(cin, com);
    tk = tokenize(com);
    if(tk[0] == "quit" || tk[0] == "q") {
        return true;
    }
    //This is how you quit the game
    //This is pretty ugly, will revisit after sleep

    //Need to figure a way to save the game state.
    parse(tk, p, l);
    cout << spaces << endl;
    cout << "Thanks for the input! " << endl;
    cout << "\n";
    return false;
}
