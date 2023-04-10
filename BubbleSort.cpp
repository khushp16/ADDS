#include "BubbleSort.h"
#include <iostream>
#include <vector>
using namespace std;
 
vector<int> sort(vector<int> list) {
    int i, j;
    int length = list.size();
    for (i = 0; i < length - 1; i++)
        for (j = 0; j < length - i - 1; j++)
            if (list[j] > list[j + 1])
                swap(list[j], list[j + 1]);
}