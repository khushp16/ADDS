#include <iostream>
#include "Computer.h"
#include <string>
using namespace std;

Computer::Computer() {
    name = "Computer";
    move = "Rock";
};

string Computer::getName() {
    return name;
};

string Computer::makeMove() {
    return move;
};