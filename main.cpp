#include <iostream>
#include "DocumentManager.h"

int main() {
    DocumentManager manager;
    manager.addDocument("Document 1", 1, 2);
    manager.addDocument("Document 2", 2, 1);
    manager.addDocument("Document 3", 3, 3);

    manager.addPatron(101);
    manager.addPatron(102);
    manager.addPatron(103);

    return 0;
}