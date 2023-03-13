#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>
#include "Move.h"
#include "Player.h"

class Computer : public Player {
        
        public:
            Computer();               
            std::string getName(); 
            Move* makeMove();
}; 

#endif