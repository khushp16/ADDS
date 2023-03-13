#include <iostream>
#include "Human.h"
#include "Player.h"
#include "Move.h"
#include <string>
using namespace std;


Human::Human() {
    name = "Human";
};


Human::Human(string playerName) {
    name = playerName;
}; 

Move* Human::makeMove() {
    cout << "Enter move: ";
    cin >> move;
    if ()
};

string Human::getName() {
    return name;
};