#include <iostream>
#include <vector>
#include "Heap.tpp"
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(30);
    v.push_back(4);
    v.push_back(5);

    Heap<int> heap(v);

    heap.insert(0);
    heap.print_heap();
    heap.remove(2);
    heap.print_heap();
    return 0;
}