#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <limits>
using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = 0; i < len; i++) {
        insertPosition(i+1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node *currNode = head;
    Node *temp;
    while (currNode != nullptr ) {
        temp = currNode;
        currNode = currNode->link;
        delete temp;
    }  
    head = nullptr;
}

Node *LinkedList::traverse(int index)
{
    int position = 1;
    Node *currNode = head;
    while (currNode != nullptr && position < index)
    {
        currNode = currNode->link;
        position++;
    }
    if (position == index) {
        return currNode;
    }
    else {
        return nullptr;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum, nullptr);
    if (pos <= 1 || head == nullptr) {
        newNode->link = head;
        head = newNode;
    } else {
        Node* curr = head;
        int count = 1;
        while (count < pos - 1 && curr->link != nullptr) {
            curr = curr->link;
            count++;
        }
        newNode->link = curr->link;
        curr->link = newNode;
    }
}

bool LinkedList::deletePosition(int pos)
{
    if (pos < 1 || head == nullptr)
    {
        return false;
    }

    Node *posNode = traverse(pos);
    if (posNode == nullptr)
    {
        return false;
    }

    if (pos == 1)
    {
        Node *temp = head;
        head = head->link;
        delete temp;
        return true;
    }

    Node *prevNode = traverse(pos - 1);
    Node *nextNode = posNode->link;
    prevNode->link = nextNode;
    delete posNode;
    return true;
}

int LinkedList::get(int pos)
{
    Node *Node = head;
    int count = 1;
    if (pos < 1 || head == nullptr)
    {
        return numeric_limits<int>::max();
    }
    while (Node != nullptr && count < pos)
    {
        Node = Node->link;
        count++;
    }
    return Node->data;
}

int LinkedList::search(int target)
{
    int target_count = 1;
    Node *targetNode = head;

    while (targetNode != nullptr)
    {
        if (targetNode->data == target)
        {
            return target_count;
        }
        targetNode = targetNode->link;
        target_count++;
    }
    return -1;
}

void LinkedList::printList()
{
    Node *currNode = head;
    cout << "[";
    while (currNode != nullptr)
    {
        cout << currNode->data << " ";
        currNode = currNode->link;
    }
    cout << "]";
    cout << endl;
}