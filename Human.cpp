#include <iostream>
#include "Human.h"
#include "Player.h"
#include <string>
using namespace std;


Human::Human() {
    name = "Human";
};


Human::Human(string playerName) {
    name = playerName;
}; 

char Human::makeMove() {
    cout << "Enter move: ";
    cin >> move;
    return move;
};

string Human::getName() {
    return name;
};