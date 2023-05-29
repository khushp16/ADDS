#include "DocumentManager.h"
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

void DocumentManager::addDocument(string name, int id, int license_limit)
{
    documents[id] = {name, license_limit};
    borrowed_counts[id] = 0;
}

void DocumentManager::addPatron(int patronID)
{
    patrons.insert(patronID);
}

int DocumentManager::search(string name)
{
    for (const auto &pair : documents)
    {
        if (pair.second.first == name)
        {
            return pair.first;
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID)
{
    if (patrons.find(patronID) == patrons.end())
    {
        return false;
    }

    auto document = documents.find(docid);
    if (document == documents.end())
    {
        return false;
    }

    if (borrowed_counts[docid] >= document->second.second)
    {
        return false;
    }

    borrowed_counts.at(docid)++;
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID)
{
    if (borrowed_counts[docid] > 0)
    {
        borrowed_counts.at(docid)--;
    }
}