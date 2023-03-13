#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "Move.h"

class Player {

    public:
        virtual std::string getName() = 0; 
        Move * makeMove(); 
        std::string name;
        Move * move;
};

#endif