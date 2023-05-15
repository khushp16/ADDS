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

void Autocomplete::helperFunction(string& letter, vector<string>& completedVector, Trie* iteration) {
    if (iteration == nullptr) {
        return;
    }

    if (iteration->isEndOfWord) {
        completedVector.push_back(letter);
    }

    for (int i = 0; i < 26; i++) {
        if (iteration->children[i] != nullptr) {
            char character = 'a' + i;
            letter.push_back(character);
            helperFunction(letter, completedVector, iteration->children[i]);
            letter.pop_back();
        }
    }
}