#include <iostream>
#include "Reverser.h"
#include <string>
using namespace std;

int Reverser::reverseDigit(int value) {
    
    if (value <= 9) {
        return value;
    } 
    int reverse = value;
    int number = 1;
    int remainder = value%10;
    while (reverse/10 >= 1) {
        reverse = reverse/10;
        number = number*10; 
    }
    return (remainder * number) + reverseDigit(value/10);
};

string Reverser::reverseString(string characters) {
    if (characters.size() == 1) {
        return characters;
    }
    char first = characters.at(0);
    characters.erase(0, 1);
    return reverseString(characters) + first;
};



