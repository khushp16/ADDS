#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Move.h"
#include "Paper.h"
#include <vector>
#include <string>
using namespace std;

Referee::Referee() {
    
};  

Player * Referee::refGame(Player * player1, Player * player2) {

    p1 = player1->makeMove(); 
    p2 = player2->makeMove();

    for (int i = 0; i < p1->getNum(); i++) {
        if (p1->getWin(i) == p2->getName()) {
            return player1;
        } 
        else if (p1->getLose(i) == p2->getName()) {
            return player2;
        }
    }
    return nullptr;
}