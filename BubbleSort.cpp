#include "BubbleSort.h"
#include <iostream>
#include <vector>
using namespace std;
 
vector<int> Sort::sort(vector<int> list) {
    for (int i = 0; i < list.size() - 1; i++)
        for (int j = 0; j < list.size() - i - 1; j++) {
            int curr_temp = list.at(j+1);
            if (list.at(j) > list.at(j+1)) {
                list.at(j+1) = list.at(j);
                list.at(j) = curr_temp;
            }
        }
    return list;
}
