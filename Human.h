#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Move.h"
#include "Player.h"

class Human : public Player {

   public:
        Human();
        Human(std::string playerName);               
        std::string getName(); 
        Move* makeMove();              
}; 

#endif