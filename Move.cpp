#include <iostream>
#include "Move.h"
using namespace std;

string Move::getName() {
    return move_name;
}

int Move::getNum() {
    return num;
}
string Move::getWin(int index) {
    return win[index];
}
string Move::getLose(int index) {
    return lose[index];
}

