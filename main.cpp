#include <iostream>
#include "Heap-skeleton.tpp"
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 5; i++) {
        v.push_back(1);
        v.push_back(2);
        v.push_back(30);
        v.push_back(4);
        v.push_back(5);
    }
    Heap<int> Heap(v);
}