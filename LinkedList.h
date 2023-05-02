#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
class LinkedList
{
    Node *head;

public:
    LinkedList();
    ~LinkedList();
    void printList();
    Node *traverse(unsigned int index);
    void insertAtPosition(int item, unsigned int index);
    void deleteFromFront();
};
#endif
