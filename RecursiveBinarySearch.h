#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <iostream>
#include <vector>

class RecursiveBinarySearch{
    private:
        int searchHelper(std::vector<int> &list, int target, int start, int end);
    public:
        bool search(std::vector<int>, int);
};
#endif