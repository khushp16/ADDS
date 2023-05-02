#include <iostream>

#include "LinkedList.h"
#include "Node.h"
using namespace std;
int main()
{
    int array[3] = {1, 2, 3};
    int len = 3;
    LinkedList list1(array, len);
    list1.printList();

    list1.insertPosition(1, 0);
    list1.insertPosition(3, 1);
    list1.printList();

    list1.deletePosition(1);
    list1.printList();

    /*
    list1.deletePosition(3);
    list1.printList();

    cout << list1.search(3) << endl;
    cout << list1.search(-1) << endl;
    cout << list1.get(13) << endl;
    cout << list1.get(2) << endl;
    cout << list1.get(-1) << endl;
    */
}