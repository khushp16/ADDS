#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <vector>

class Move {
    protected:
        vector<std::string> loseAgainst;
        vector<std::string> winAgainst;
        std::string moveName;

    public:
        std::string getName();
        Move * move;
        int vecSize;
        
};

#endif