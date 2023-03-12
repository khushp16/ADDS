
#include <iostream>
#include "Computer.h"
#include <string>
using namespace std;

Computer::Computer() {
    name = "Computer";
    move = 'R';
};

string Computer::getName() {
    return name;
};

char Computer::makeMove() {
    return move;
};