#include <iostream>
#include "Zombie.h"
#include "Move.h"
#include <string>
using namespace std;

Zombie::Zombie () {
    win[0] = "Pirate";
    win[1] = "Monkey";
    lose[0] = "Robot";
    lose[1] = "Monkey";
    move_name = "Zombie";
    num = 2;
}