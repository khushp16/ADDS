#include <iostream>
#include "Reverser.h"
#include <string>
using namespace std;


int Reverser::reverseDigit(int value) {
    if (value < 1) {
        return 0;
    }
    
    int reverse = value%10;
    int number = 1;

    while (value/10 >= 1) {
        value = value/10;
        number = number*10; 
    }

    return (reverse * number) + reverseDigit(value/10);
};




