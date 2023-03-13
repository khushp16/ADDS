#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"
#include "Move.h"
#include <string>

class Human : public Player {

   public:
        Human();
        Human(std::string playerName);               
        std::string getName(); 
        Move* makeMove();
}; 

#endif