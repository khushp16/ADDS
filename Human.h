#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"
#include <string>

class Human : public Player {

   public:
        Human();
        Human(std::string playerName);               
        std::string getName(); 
        char makeMove();
        std::string name;
        char move;
}; 

#endif