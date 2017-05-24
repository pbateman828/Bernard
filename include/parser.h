#ifndef PARSER_H
#define PARSER_H

<<<<<<< HEAD
#include "player.h"
=======
#include "level.h"
>>>>>>> a2a22b3b2731c41601e44eb1a85062c9027279d2
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
