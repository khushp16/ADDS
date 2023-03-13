#include <iostream>
#include "Computer.h"
#include "Move.h"
#include "Rock.h"
#include "Player.h"
#include <string>
using namespace std;

Computer::Computer() {
    name = "Computer";
    move = new Rock;
};

Move* Computer::makeMove() {
    return move;
};

string Computer::getName() {
    return name;
};