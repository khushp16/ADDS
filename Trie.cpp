#include <iostream>
#include "Trie.h"
using namespace std;

Trie::Trie() {
    isEndOfWord = false;
    for (int i = 0; i < 26; i ++) {
        children[i] == nullptr;
    }
}