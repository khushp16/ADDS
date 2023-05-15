#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include "Trie.h"
#include <string>
#include <vector>

class Trie;

class Autocomplete {
    private:
        Trie* root;

    public:
        Autocomplete();
        void insert(std::string word);
        std::vector<std::string> getSuggestions(std::string partialWord);
        void helperFunction(std::string& partialWord, std::vector<std::string>& words, Trie *trie);
};

#endif