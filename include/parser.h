#ifndef PARSER_H
#define PARSER_H

#include "player.h"
#include <string>
#include <vector>

using namespace std;

void parse (vector<string>, Player*); //Parses tokenized user input

/* Tokenizes user input, kind of like doing 
 * the split(' ') function in python.
 */
vector<string> tokenize (string);

bool u_input (Player*); // Main handler of user input.

#endif
