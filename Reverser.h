#ifndef REVERSER_H
#define REVERSER_H
#include <iostream>
#include <string>

class Reverser {
    private:
        int reverse;
        int remainder;
    public:
        std::string reverseString(std::string characters);
        Reverser();
        int reverseDigit(int value);
};

#endif