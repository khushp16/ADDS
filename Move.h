#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <vector>

class Move {
    protected:
        std::string win[2];
        std::string lose[2];
        std::string move_name;
        int num;
    public:
        std::string getName();
        int getNum();
        std::string getWin(int index);
        std::string getLose(int index);
};

#endif