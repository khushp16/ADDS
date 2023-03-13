#include <iostream>
#include "Human.h"
#include "Player.h"
#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissor.h"
#include <string>
using namespace std;


Human::Human() {
    name = "Human";
};


Human::Human(string playerName) {
    name = playerName;
}; 

string Human::getName() {
    return name;
};

Move* Human::makeMove() {
    cout << "Enter move: ";
    cin >> move_name;
    
    if (move_name == "Paper") {
        move = new Paper;
        return move;
    } 
    else if (move_name == "Rock") {
        move = new Rock;
        return move;
    }
    else if (move_name == "Scissor") {
        move = new Scissor;
        return move;
    }
    return nullptr;
};