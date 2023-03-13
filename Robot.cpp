#include <iostream>
#include "Robot.h"
#include "Move.h"
#include <string>
using namespace std;

Robot::Robot () {
    win[0] = "Ninja";
    win[1] = "Zombie";
    lose[0] = "Monkey";
    lose[1] = "Robot";
    move_name = "Robot";
    num = 2;
}