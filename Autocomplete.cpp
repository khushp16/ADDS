#include "Autocomplete.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Autocomplete::Autocomplete()
{
    root = new Trie();
}

void Autocomplete::insert(std::string word)
{
    Trie *trie = root;
    for (int index = 0; index < word.size(); index++)
    {
        if (trie->children[word[index] - 'a'] == nullptr)
        {
            trie->children[word[index] - 'a'] = new Trie();
        }
        trie = trie->children[word[index] - 'a'];
    }
    trie->isEndOfWord = true;
}

vector<string> Autocomplete::getSuggestions(string partialWord)
{
    vector<string> words;
    Trie *trie = root;
    for (int i = 0; i < partialWord.size(); i++)
    {
        if (trie->children[partialWord[i] - 'a'] == nullptr)
        {
            return words;
        }
        trie = trie->children[partialWord[i] - 'a'];
    }
    helperFunction(partialWord, words, trie);
    return words;
}

void Autocomplete::helperFunction(std::string& prefix, std::vector<std::string>& suggestions, Trie* node) {
    if (node == nullptr) {
        return;
    }

    if (node->isEndOfWord) {
        suggestions.push_back(prefix);
    }

    for (int i = 0; i < 26; i++) {
        if (node->children[i] != nullptr) {
            char c = 'a' + i;
            prefix.push_back(c);
            helperFunction(prefix, suggestions, node->children[i]);
            prefix.pop_back();
        }
    }
}