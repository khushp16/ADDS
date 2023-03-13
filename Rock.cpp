#include <iostream>
#include "Rock.h"
#include "Move.h"
#include <string>
using namespace std;

Rock::Rock () {
    win[0] = "Scissors";
    lose[0] = "Paper";
    move_name = "Rock";
    num = 1;
}

