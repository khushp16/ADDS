#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {

    vector<int> result;
    
    size_t index = 0;  
    size_t one = 0; 
    for(size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0,i), index);
        if (found != string::npos) {
            result.push_back(found);
            index = found;
            one += 1;
        } else {
            i = s2.size();
            size_t j = 0;;
            while (j < s2.size() - one) {
                result.push_back(-1);
                j++;
            }
        }
    }
    return result;
}

   