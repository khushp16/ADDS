#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissor.h"
using namespace std;

int main() {
    
    Human h1;

    Computer c1;

    Referee r1;

    Player *p1;

    p1 = r1.refGame(&h1, &c1);
    cout << p1->getName() << endl;
    
    return 0;
}