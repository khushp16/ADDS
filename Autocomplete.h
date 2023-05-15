#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include "Trie.h"
#include "Autocomplete.h"
#include <string>
#include <vector>

class Autocomplete {
    private:
        Trie *root;

    public:
        Autocomplete();
        void insert(std::string word);
        std::vector<std::string> getSuggestions(std::string partialWord);
};

#endif