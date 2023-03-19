#include <iostream>
#include "Reverser.h"
#include <string>
using namespace std;


int Reverser::reverseDigit(int value) {
    if (value < 1) {
        return 0;
    }
    return (value%10) + reverseDigit(value/10);

};




