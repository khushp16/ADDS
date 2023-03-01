#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include <string>

class Referee {

    public :
        Referee();
        Player * refGame(Player * player1, Player * player2);
        Player *winner;
}; 

#endif;