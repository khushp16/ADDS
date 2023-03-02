#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Player.h"
#include <string>
using namespace std;

Referee::Referee() {
    
};  

Player * Referee::refGame(Player * player1, Player * player2) {

    c = player1->makeMove(); 

    if (c == 'P') {
        winner = player1;   
    }
    else if (c == 'S') {
        winner = player2;
    }
    else if (c == 'R') {
        winner = nullptr;
    }
    return winner;
}