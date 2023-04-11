#include "QuickSort.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
    
    int pivot_point;

    if (list.size() < 1) {
        return list;
    } else if (list.size() >= 3) {
        pivot_point = list.at(2);
    } else {
        pivot_point = list.at(list.size() - 1);
    }

    vector<int> left_pivot, middle, right_pivot;

    for (int i = 0; i < list.size(); i++) {
        if (list.at(i) < pivot_point) {
            left_pivot.push_back(list.at(i));
        } else if (list.at(i) == pivot_point) {
            middle.push_back(list.at(i));
        } else if (list.at(i) > pivot_point){
            right_pivot.push_back(list.at(i));
        }
    }

    left_pivot = sort(left_pivot);
    right_pivot = sort(right_pivot);

    for (int y = 0; y < middle.size(); y++) {
        left_pivot.push_back(middle.at(y));
    }
    for (int z = 0; z < right_pivot.size(); z++) {
        left_pivot.push_back(right_pivot.at(z));
    }
    return left_pivot;
}