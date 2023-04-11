#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
using namespace std;


int RecursiveBinarySearch::searchHelper(vector<int> &list, int target, int start, int end) {
    if (start > end) {
        return false;
    }
    int mid = (start + end) / 2;

    if (list.at(mid) == target) {
        return true;
    } else if (list.at(mid) > target) {
        return searchHelper(list, target, start, mid - 1);
    } else {
        return searchHelper(list, target, mid + 1, end);
    }
}

bool RecursiveBinarySearch::search(vector<int> list, int target) {
    return searchHelper(list, target, 0, list.size() - 1);
}
