#include <iostream>
#include "Pirate.h"
#include "Move.h"
#include <string>
using namespace std;

Pirate::Pirate () {
    win[0] = "Robot";
    win[1] = "Monkey";
    lose[0] = "Ninja";
    lose[1] = "Zombie";
    move_name = "Pirate";
    num = 2;
}
