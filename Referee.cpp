#include <iostream>
#include "Referee.h"
#include <vector>
using namespace std;

Referee::Referee() {
    
};  

Player * Referee::refGame(Player * player1, Player * player2) {

    player1->makeMove(); 
    player2->makeMove();

    for (int i = 0; i < vecSize; i++) {
        if (player1->winAgainst == player2->loseAgainst) {
            return player1;
        } 
        else if (player1->loseAgainst == player2->winAgainst) {
            return player2;
        }
    }

}