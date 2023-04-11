#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
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
    vector <int> original = {10,1,3,5,6,7,8};
    vector <int> duplicate = q1.sort(original);

    return 0;
}