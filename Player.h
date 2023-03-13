#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "Move.h"

class Player {

    public:
        virtual std::string getName() = 0; 
        virtual Move * makeMove() = 0; 
        std::string name;
        std::string move_name;
        Move * move;
};

#endif