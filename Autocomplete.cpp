#include "Autocomplete.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Autocomplete::Autocomplete() {
    root = new Trie();
}

void Autocomplete::insert(std::string word) {
    Trie* trie = root;
    int index = 0;
    while (index <= word.size()) {
        if(trie->children[word[index]-'a'] == nullptr) {
            trie->children[word[index]-'a'] = new Trie();
        }
        trie=trie->children[word[index]-'a'];
        index++;
    }
    trie->isEndOfWord = true;
}

vector<string> getSuggestions(string partialWord) {
    
}