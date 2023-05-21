#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kth_largest(vector<int> values, int k)
{
    priority_queue<int> pq;

    for (int j = 0; j < values.size(); j++)
    {
        pq.push(values.at(j));
    }

    for (int i = 0; i < k - 1; i++)
    {
        pq.pop();
    }
    return pq.top();
}
