#include <iostream>
#include <string>

#include "l_init.h"

using namespace std;


level* l_init() {
    string levelIntro = "Welcome to SweetWater, where you can be anyone you want.";
    int doorsNum = 2;
    vector<string> _levelItems = {"weapons", "clothes", "boots", "hat"};

    level* l;
    //cout << "What is your name?" << endl;
    //getline(cin,l);
    l = new level{levelIntro, _levelItems ,doorsNum};
    l->levelDescript();
    l->printLevelItems();
    return l;
}

level* l2_init() {
    string levelIntro = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n Donec condimentum turpis urna, tempus pellentesque tellus mollis ut.\n Etiam dui quam, commodo a finibus vitae, porttitor vel nibh.";
    int doorsNum = 1;
    vector<string> _levelItems = {"whiskey", "glove", "crystal", "donald trump's hair piece"};

    level* l;
    //cout << "What is your name?" << endl;
    //getline(cin,l);
    l = new level{levelIntro, _levelItems ,doorsNum};
    l->printLevelItems();
    return l;
}
