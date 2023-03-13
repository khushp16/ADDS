#include <iostream>
#include "Scissors.h"
#include "Move.h"
using namespace std;

Scissors::Scissors() {
    win[0] = "Paper";
    lose[0] = "Rock";
    move_name = "Scissors";
    num = 1;
}