#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
using namespace std;

int main() {
    Truckloads t1;
    cout << t1.numTrucks(14, 3) << endl;

    Reverser r1;
    cout << r1.reverseDigit(12345) << endl;

    return 0;
 }