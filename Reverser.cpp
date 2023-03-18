#include <iostream>
#include "Reverser.h"
#include <string>
using namespace std;

Reverser::Reverser() {
    int reverse = 0;
    int remainder = 0;
}

int Reverser::reverseDigit(int value) {

    if (value < 1) {
        return reverse;
    }
    reverse = reverse*10;
    remainder = value%10;
    reverse = reverse + remainder;
    return reverseDigit(value/10);

};



