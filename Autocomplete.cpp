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

void Autocomplete::helperFunction(string partialWord, vector<string> words, Trie *trie)
{

    if (trie->isEndOfWord)
    {
    }
}