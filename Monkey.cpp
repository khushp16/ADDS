#include <iostream>
#include "Monkey.h"
#include "Move.h"
#include <string>
using namespace std;

Monkey::Monkey () {
    win[0] = "Ninja";
    win[1] = "Robot";
    lose[0] = "Pirate";
    lose[1] = "Zombie";
    move_name = "Monkey";
    num = 2;
}