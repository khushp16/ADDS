#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        cout << vector.at(i) << " ";
    }
    cout << endl;
}

int main() {
    QuickSort q1;
    RecursiveBinarySearch r1;
    vector <int> original;
    int num;
    int num_length = 0;
    while (cin >> num) {
        original.push_back(num);
        num_length++;
    }
    vector <int> duplicate = q1.sort(original);

    if (r1.search(duplicate, 1) == 1) {
        cout << "true" << " ";
    } else {
        cout << "false" << " ";
    }
    int i = 0;
    while (i < num_length) {
        cout << duplicate.at(i) << " ";
        i++;
    }
    cout << endl;

    return 0;
}