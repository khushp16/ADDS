#include "BubbleSort.h"
#include "QuickSort.h"
#include "Sort.h"
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> myVector) {
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector.at(i) << " ";
    }
    cout << endl;
}

int main() {
    QuickSort q1;
    vector <int> original = {10,9,3,1,5,6,7,8,1};
    vector <int> duplicate = q1.sort(original);
    printVector(duplicate);

    return 0;
}