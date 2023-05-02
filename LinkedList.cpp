#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <limits.h>
using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::LinkedList(int *array, int len)
{
    if (len <= 0)
    {
        head = nullptr;
        return;
    }
    head = nullptr;
    Node *node = new Node(array[0], nullptr);
    head = node;

    for (int i = 1; i < len; i++)
    {
        Node *curr = new Node(array[i], nullptr);
        node->link = curr;
        node = curr;
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
    return currNode;
}

void LinkedList::insertPosition(int pos, int newNum)
{
    if (pos <= 1)
    {
        head = new Node(newNum, head);
    }
    else
    {
        Node *prevNode = traverse(pos - 1);
        if (prevNode == nullptr)
        {
            return;
        }
        Node *newNode = new Node(newNum, prevNode->link);
        prevNode->link = newNode;
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
    int target_count = 0;
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