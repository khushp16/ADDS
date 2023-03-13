#include <iostream>
#include "Paper.h"
#include "Move.h"
#include <string>
using namespace std;

Paper::Paper () {
    win[0] = "Rock";
    lose[0] = "Scissors";
    move_name = "Paper";
    num = 1;
}
