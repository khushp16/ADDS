#include <iostream>
#include "Finder.h"

using namespace std;

int main() {
    Finder finder;
    string s1 = "4634554567";
    string s2 = "45689";
    vector<int> result = finder.findSubstrings(s1, s2);
    
    cout << "Results: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}