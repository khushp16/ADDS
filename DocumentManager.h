#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

class DocumentManager
{
    private:
        std::unordered_map<int, std::pair<std::string, int>> documents;
        std::unordered_map<int, int> borrowed_counts;
        std::unordered_set<int> patrons; 
        
    public:
        void addDocument(std::string name, int id, int license_limit);

        void addPatron(int patronID);

        int search(std::string name);

        bool borrowDocument(int docid, int patronID);

        void returnDocument(int docid, int patronID);
};

#endif