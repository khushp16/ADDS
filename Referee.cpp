#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Player.h"
#include <string>
using namespace std;

Referee::Referee() {
    winner = nullptr;
};  

Player * Referee::refGame(Player * player1, Player * player2) {

    if (player1->move == 'P') {
        winner = player1;
        
    }
    else if (player1->move == 'S') {
        winner = player2;
    }
    return winner;
}