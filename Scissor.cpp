#include <iostream>
#include "Scissor.h"
#include "Move.h"
using namespace std;

Scissor::Scissor() {
    win[0] = "Paper";
    lose[0] = "Rock";
    move_name = "Scissor";
    num = 1;
}