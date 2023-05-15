#ifndef TRIE_H
#define TRIE_H
#include <vector>
#include <string>
#include "Autocomplete.h"

class Autocomplete;

class Trie {
    friend class Autocomplete;
private:
    Trie *children[26];
    bool isEndOfWord;
public:
    Trie();
};
#endif
