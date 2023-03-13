#include <iostream>
#include "Ninja.h"
#include "Move.h"
#include <string>
using namespace std;

Ninja::Ninja () {
    win[0] = "Pirate";
    win[1] = "Zombie";
    lose[0] = "Robot";
    lose[1] = "Monkey";
    move_name = "Ninja";
    num = 2;
}