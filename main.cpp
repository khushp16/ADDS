#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Player.h"
#include "Human.h"
using namespace std;

int main() {
    
    Human h1;
    cout << h1.makeMove() << endl;

    Computer c1;
    cout << c1.makeMove() << endl;

    Referee r1;
    cout << r1.refGame(&h1, &c1) << endl;
    
    return 0;
}