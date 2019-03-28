#include <iostream>
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"

int main(){
    DoublyLinkedList *test = new DoublyLinkedList(4);
    DoublyLinkedList *test2 = new DoublyLinkedList(9);
    test->Append(test2);
    test->PrintBackward();
    test->PrintForward();

    return 0;
}