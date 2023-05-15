#ifndef TRIE_H
#define TRIE_H
#include <vector>
#include <string>
#include "Autocomplete.h"

class Autocomplete;
class Trie {
private:
    friend class Autocomplete;
    Trie *children[26];
    bool isEndOfWord;
public:
    Trie();
};
#endif
