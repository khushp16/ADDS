#include "Trie.h"
#include "Autocomplete.h"
#include <iostream>
using namespace std;

int main()
{
    Autocomplete autocomplete;

    autocomplete.insert("apple");
    autocomplete.insert("banana");
    autocomplete.insert("application");
    autocomplete.insert("ball");
    return 0;
}