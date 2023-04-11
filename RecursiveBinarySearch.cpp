#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
using namespace std;


int RecursiveBinarySearch::searchHelper(vector<int> &list, int target, int start, int end) {

    if (start > end) {
        return false;
    }

    int middle_point = (start + end) / 2;

    if (list.at(middle_point) == target) {
        return true;
    } 
    else if (list.at(middle_point) > target) {
        return searchHelper(list, target, start, middle_point - 1);
    } 
    else {
        return searchHelper(list, target, middle_point + 1, end);
    }

}

bool RecursiveBinarySearch::search(vector<int> list, int target) {
    return searchHelper(list, target, 0, list.size() - 1);
}
