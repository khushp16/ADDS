#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include <string>
#include "Move.h"
#include "Player.h"
 
class Referee {

    public :
        Referee();
        Player * refGame(Player * player1, Player * player2);
        Move *p1;
        Move *p2;
}; 

#endif