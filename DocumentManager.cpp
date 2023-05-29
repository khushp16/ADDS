#include "DocumentManager.h"
#include <iostream>
using namespace std;

void DocumentManager::addDocument(string name, int id, int license_limit) {
    documents[id] = {name, license_limit};
    borrowed_counts[id] = 0;
};

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
};

int search(string name);

bool borrowDocument(int docid, int patronID); 

void returnDocument(int docid, int patronID);